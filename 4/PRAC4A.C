#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct poly
 {
  int coef;
  int power_x;
  int power_y;
  struct poly *link;
 }*P1=NULL,*P2=NULL,*P3=NULL;

 void main()
  {
   struct poly *poly1;
   struct poly *poly2;
   struct poly *addp;
   struct poly *create(struct poly*,struct poly*);

   void disp();
   void polyadd();
   char ch='y';
   int n;
   while(ch=='y'||'Y')
    {
      clrscr();
      printf("\t1. Insertion in polynomial 1\n");
      printf("\t2. Insertion in polynomial 2\n");
      printf("\t3. Add the polynomials\n");
      printf("\t4. Display\n");
      printf("\t5. Exit\n\n");

      printf("Enter your choice: ");
      scanf("%d",&n);
      switch(n)
       {
	 case 1:poly1=(struct poly*)malloc(sizeof(struct poly));
		printf("Power of x: ");
		scanf("%d",&poly1->power_x);
		printf("Power of y: ");
		scanf("%d",&poly1->power_y);
		printf("Coefficient of the variable: ");
		scanf("%d",&poly1->coef);
		P1=create(P1,poly1);
		break;
	 case 2:poly2=(struct poly*)malloc(sizeof(struct poly));
		printf("Power of x: ");
		scanf("%d",&poly2->power_x);
		printf("Power of y: ");
		scanf("%d",&poly2->power_y);
		printf("Coefficient of the variable: ");
		scanf("%d",&poly2->coef);
		P2=create(P2,poly2);
		break;
	 case 3:polyadd();
		break;
	 case 4:disp();
		break;
	 case 5:exit(1);
       }
   printf("\nDo you want to continue: ");
   fflush(stdin);
   scanf("%c",&ch);
   }
  }

struct poly * create(struct poly *start,struct poly *ptr)
 {
  struct poly *temp;
  struct poly *save;
  int n=1;
  if(start==NULL)
   {
    ptr->link=NULL;
    start=ptr;
   }
   else
   {
    if(start->power_x==ptr->power_x && start->power_y==ptr->power_y)
     start->coef+=ptr->coef;
     else if(start->power_x<ptr->power_x)
      {
       ptr->link=start;
       start=ptr;
      }
      else if(start->power_x==ptr->power_x && start->power_y<ptr->power_y)
       {
	 ptr->link=start;
	 start=ptr;
       }
    else
    { save=start;
      temp=save->link;
      while(save!=NULL)
       {
       if(temp->power_x>ptr->power_x)
	 {
	   temp=temp->link;
	   save=save->link;
	 }
       else if(temp->power_x==ptr->power_x && temp->power_y>ptr->power_y)
	{
	  temp=temp->link;
	  save=save->link;
	}
       else if(temp->power_x==ptr->power_x && temp->power_y==ptr->power_y )
	 {
	 temp->coef+=ptr->coef;
	 n=0;
	 break;
	 }
	else
	{
	 ptr->link=temp;
	 save->link=ptr;
	 n=0;
	 break;
	}
	}
	if(n)
	 {
	  temp->link=ptr;
	  ptr->link=NULL;
	 }
       }
   }
   return start;
   }

   void disp()
    {
     struct poly *p;
     p=P1;
     printf("\nPolynomial 1: \n");
     while(p)
      {
	printf("\t%d x^%d y^%d",p->coef,p->power_x,p->power_y);
	p=p->link;
      }
     printf("\nPolynomial 2:\n");
     p=P2;
     while(p)
      {
       printf("\t%d x^%d y^%d",p->coef,p->power_x,p->power_y);
       p=p->link;
      }
     printf("\n Added polynomials: \n" );
     p=P3;
     while(p)
      {
       printf("\t%d x^%d y^%d",p->coef,p->power_x,p->power_y);
       p=p->link;
      }
    }

   void polyadd()
     {
       struct poly *pol1=P1;
       struct poly *pol2=P2;
       struct poly *pol;
	while(pol1 && pol2)
	 {
	    pol=(struct poly *)malloc(sizeof(struct poly));
	    if(pol1->power_x>pol2->power_x || (pol1->power_x==pol2->power_x && pol1->power_y>pol2->power_y))
		{
		pol->power_x=pol1->power_x;
		pol->power_y=pol1->power_y;
		pol->coef=pol1->coef;
		pol1=pol1->link;
		}
	  else if(pol1->power_x<pol2->power_x || (pol1->power_x==pol2->power_x && pol1->power_y<pol2->power_y))
	{
		pol->power_x=pol2->power_x;
		pol->power_y=pol2->power_y;
		pol->coef=pol2->coef;
		pol2=pol2->link;
	}
	else
	{
	pol->power_x=pol1->power_x;
	pol->power_y=pol1->power_y;
	pol->coef=pol1->coef+pol2->coef;
	pol1=pol1->link;
	pol2=pol2->link;
	}

	if(P3==NULL)
	   {
	    P3=pol;
	    pol->link=NULL;
	   }
	  else
	  {
	    struct poly *s = P3;
	    while(s->link!=NULL)
	     {
	      s=s->link;
	     }
	     s->link=pol;
	     pol->link=NULL;
	  }
	}
	while(pol1 || pol2)
	{
	pol=(struct poly *)malloc(sizeof(struct poly));
	if(pol1)
	{
	pol->power_x=pol1->power_x;
	pol->power_y=pol1->power_y;
	pol->coef=pol1->coef;
	pol1=pol1->link;
	}
	if(pol2)
	{
	pol->power_x=pol2->power_x;
	pol->power_y=pol2->power_y;
	pol->coef=pol2->coef;
	pol2=pol2->link;
	}

	if(P3==NULL)
	   {
	    P3=pol;
	    pol->link=NULL;
	   }
	  else
	  {
	    struct poly *s = P3;
	    while(s->link!=NULL)
	     {
	      s=s->link;
	     }
	     s->link=pol;
	     pol->link=NULL;
	  }
	}

}

