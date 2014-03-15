#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{	int info;
	struct node *link ;

} *start= NULL, *nw, *next ,*temp,*p;

void main()
{       char ch='Y';
	int x;
	clrscr();
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
	    {   nw->link = NULL;
	       }
	    else
	    {
		nw->link =start;
	    }
	       start=nw;


	    printf("Do you want to create new node :") ;
	    fflush(stdin);
	    scanf("%c", &ch);

	}while((ch=='y')||(ch=='Y'))   ;

	printf("\n\nThe linked list created is :\n") ;
	temp = start;
	do
	{
	       next= temp;
	   printf("%d -> ",next->info) ;
		temp= next->link;


	}while(next->link!=NULL)   ;

	printf("\n\nReversing the linked list :\n") ;

       p=temp = start;
	next = NULL;
	do
	{
		if(temp==start)
		{       next = temp->link;
			temp->link=NULL;

		}
	       	p=next->link; 
		next->link=temp;
		temp=next;

		next= p;
	       if(p==NULL)
	       {
		  start=temp;
		  break;
	       }


	}while(p!=NULL) ;

		temp = start;
		next=NULL;
	do
	{
	       next= temp;
	   printf("%d -> ",next->info) ;
		temp= next->link;


	}while(next->link!=NULL)   ;

	getch();
}