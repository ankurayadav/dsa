#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{	int info;
	struct node *link ;

} *nw, *next ,*temp,*p;
struct node *start[11];
void pqinsert(void);
void pqdelete(void);
void display(void);
void main()
{       int n,i ;
	for(i=0;i<10;i++)
	{    start[i]=NULL;
	}
	s:
	clrscr();

	printf("Implementation of priority que using linked list :\n\n");
	printf("Select your choice :\n");
	printf("1. Insertion in priority que :\n") ;
	printf("2. Deletion from priority que :\n")  ;
	printf("3. Display :\n");
	printf("4. Exit :") ;
	scanf("%d",&n) ;
	switch(n)
	{
	  case 1:	pqinsert();  getch();goto s;
	  case 2:       pqdelete();  getch();goto s;
	  case 3:	display(); getch();goto s;
	  case 4:       break;

	}



    }

void pqinsert()
{
	char ch='Y';
	int x,pr;
	s:
	clrscr();
	printf("Enter the priority(1-10) of the element :");
	scanf("%d",&pr)  ;
	if(pr>10)
	{
	   printf("please enter within specified priority :") ;
	   goto s;
	}
	printf("\nInserting in priority que with priority %d :\n",pr)  ;
       do
    {
	    if((nw=(struct node *) malloc(sizeof(struct node)))==NULL)
	     {
		printf("Underflow") ;
		break;
	     }

	    printf("Enter a value :");
	    scanf("%d",&x) ;
	       nw->info = x;
	    if(start[pr]==NULL)
	    {   nw->link = NULL;
	       }
	    else
	    {
		nw->link =start[pr];
	    }
	       start[pr]=nw;


	    printf("Do you want enter more values :") ;
	    fflush(stdin);
	    scanf("%c", &ch);

	}while((ch=='y')||(ch=='Y'))   ;
	p=temp = start[pr];
	next = NULL;
	do
	{
		if(temp==start[pr])
		{       next = temp->link;
			temp->link=NULL;

		}
		p=next->link;

		next->link=temp;
		temp=next;

		next= p;
	       if(p==NULL)
	       {
		  start[pr]=temp;
		  break;
	       }


	}while(p!=NULL) ;
		printf("\n\nPriority que now is :\n\n\t\t") ;
	for(pr=1;pr<=10;pr++)
	{     printf("%d -> ",pr) ;
	      if(start[pr]==NULL)
	      {       printf("NULL");
	      }
	      else{
		temp = start[pr];
		do
		{
		next= temp;
		printf("%d--",next->info) ;
		temp= next->link;


		}while(next->link!=NULL)   ;
		}

		printf("\n\t\t") ;

	 }

}

void pqdelete()
{       int pr;
	s:
	clrscr();
		printf("\n\nPriority que now is :\n\n\t\t") ;
	for(pr=1;pr<=10;pr++)
	{     printf("%d -> ",pr) ;
	      if(start[pr]==NULL)
	      {       printf("NULL");
	      }
	      else{
		temp = start[pr];
		do
		{
		next= temp;
		printf("%d--",next->info) ;
		temp= next->link;


		}while(next->link!=NULL)   ;
		}

		printf("\n\t\t") ;

	 }

	printf("\nEnter the priority(1-10) of the element :");
	scanf("%d",&pr)  ;
	if(pr>10)
	{
	   printf("please enter within specified priority :") ;
	   goto s;
	}

	printf("\n\nPriority que %d is :\n\n\t\t",pr) ;
	temp = start[pr];
	do
	{
	       next= temp;
	   printf("%d--",next->info) ;
		temp= next->link;


	}while(next->link!=NULL)   ;
	printf("\nDeleting %d from que :\n",start[pr]->info) ;

	start[pr]=start[pr]->link;
	printf("\n\nPriority que now is :\n\n\t\t") ;
	for(pr=1;pr<=10;pr++)
	{     printf("%d -> ",pr) ;
	      if(start[pr]==NULL)
	      {       printf("NULL");
	      }
	      else{
		temp = start[pr];
		do
		{
		next= temp;
		printf("%d--",next->info) ;
		temp= next->link;


		}while(next->link!=NULL)   ;
		}

		printf("\n\t\t") ;

	 }

}

void display()
{
	int pr;
	printf("\n\nPriority que now is :\n\n\t\t") ;
	for(pr=1;pr<=10;pr++)
	{     printf("%d -> ",pr) ;
	      if(start[pr]==NULL)
	      {       printf("NULL");
	      }
	      else{
		temp = start[pr];
		do
		{
		next= temp;
		printf("%d--",next->info) ;
		temp= next->link;


		}while(next->link!=NULL)   ;
		}

		printf("\n\t\t") ;

	 }

}
