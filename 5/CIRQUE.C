#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{	int info;
	struct node *link ;

} *start= NULL, *nw, *next ,*temp,*p;

void cqinsert();
void cqdelete();
void display();
void main()
{       int n ;

	s:
	clrscr();

	printf("Implementation of circular que using linked list :\n\n");
	printf("Select your choice :\n");
	printf("1. Insertion in circular que :\n") ;
	printf("2. Deletion from circular que :\n")  ;
	printf("3. Display :\n");
	printf("4. Exit :") ;
	scanf("%d",&n) ;
	switch(n)
	{
	  case 1:	cqinsert();  getch();goto s;
	  case 2:       cqdelete();  getch();goto s;
	  case 3:	display(); getch();goto s;
	  case 4:       break;

	}



    }


void cqinsert()
{       char ch='Y';
	int x;
	clrscr();
	printf("Inserting in circular que :\n")  ;
	do
    {
	    if((nw=(struct node *) malloc(sizeof(struct node)))==NULL)
	     {
		printf("Underflow") ;
		break;
	     }

	    printf("Enter the value :");
	    scanf("%d",&x) ;
	       nw->info = x;
	    if(start==NULL)
	    {   start = nw;
		start->link = start;
	       }
	    else
	    {    temp = start;
	       while(temp->link!=start)
	       {      temp = temp->link;
		}
		   nw->link=start;
		   start = nw;
		   temp->link=start;

	    }

	    printf("Do you want to create new node :") ;
	    fflush(stdin);
	    scanf("%c", &ch);

	}while((ch=='y')||(ch=='Y'))   ;

	printf("\n\nThe circular que created is :\n\n\t") ;
	next = start;
       //	printf("Start") ;
	do
	{

	   if(start==NULL)
	   {
	      printf("List is empty!!") ;
	      break;
	   }
	  else
	  {
		printf("   %d ->",next->info) ;
		next= next->link;   }
	  }
	 while(next!=start)   ;
	 next=start;
	 printf("\n\t  ^\n\t  |") ;
	 do
	  {
		printf("_____") ;
		next= next->link;
	  }while(next!=start)   ;
	 printf("__|");

}

void cqdelete()
{       clrscr();
	printf("\n\nThe circular que is :\n\n\t") ;
	next = start;
      //	printf("Start") ;
	do
	{

	   if(start==NULL)
	   {
	      printf("\n\nList is empty!!\n\n") ;
	   }
	  else
	  {
		printf("   %d ->",next->info) ;
		next= next->link;   }
	  }
	 while(next!=start)   ;
	 next=start;
	 printf("\n\t  ^\n\t  |") ;
	 do
	  {
		printf("_____") ;
		next= next->link;
	  }while(next!=start)   ;
	 printf("__|");
	while(temp->link!=start)
	{    temp = temp->link;
	}
	printf("\n\nDeleting %d from circular que :\n",temp->info) ;
	temp = start;
	 if(start->link==start)
	{   start=NULL;
	 }
	else
	{while(temp->link!=start)
	{       p=temp;
		temp = temp->link;
	}
	p->link=start;     }

	printf("\n\nThe circular que now is :\n\n\t") ;
	next = start;
       //	printf("Start") ;
	do
	{

	   if(start==NULL)
	   {
	      printf("\n\nList is empty!!\n\n") ;
	   }
	  else
	  {
		printf("   %d ->",next->info) ;
		next= next->link;   }
	  }
	 while(next!=start)   ;
	 next=start;
	 printf("\n\t  ^\n\t  |") ;
	 do
	  {
		printf("_____") ;
		next= next->link;
	  }while(next!=start)   ;
	 printf("__|");

}

void display()
{
	clrscr();
	printf("\n\nThe circular que is :\n\n\t") ;
	next = start;
       //	printf("Start") ;
	do
	{

	   if(start==NULL)
	   {
	      printf("\n\nList is empty!!\n\n") ;
	      break;
	   }
	  else
	  {
		printf("   %d ->",next->info) ;
		next= next->link;   }
	  }
	 while(next!=start)   ;
	 next=start;
	 printf("\n\t  ^\n\t  |") ;
	 do
	  {
		printf("_____") ;
		next= next->link;
	  }while(next!=start)   ;
	 printf("__|");


}