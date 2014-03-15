#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{	int info;
	struct node *link ;

} *start= NULL, *nw, *next ,*temp,*p;

void push();
void pop();
void peep();
void change();
void display();

void main()
{       int n ;
	s:
	clrscr();

	printf("Implementation of stack using linked list :\n\n");
	printf("Select your choice :\n");
	printf("1. Push :\n") ;
	printf("2. Pop :\n")  ;
	printf("3. Peep :\n");
	printf("4. Change :\n");
	printf("5. Display :\n");
	printf("6. Exit :") ;
	scanf("%d",&n) ;
	switch(n)
	{
	  case 1:	push(); getch();goto s;
	  case 2:       pop();  getch();goto s;
	  case 3:       peep(); getch();goto s;
	  case 4:       change(); getch();goto s;
	  case 5:      	display(); getch(); goto s;
	  case 6:	       break;

	}
	getch();


    }

 void push()
 {
      char ch='Y';
      int x;
      clrscr();
 do
    {
	    if((nw=(struct node *) malloc(sizeof(struct node)))==NULL)
	     {
		printf("Underflow") ;
		break;
	     }

	    printf("Push a value :-->");
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


	    printf("Do you want push more values :") ;
	    fflush(stdin);
	    scanf("%c", &ch);

	}while((ch=='y')||(ch=='Y'))   ;

	printf("\n\nStack created is :\n-->") ;
	temp = start;
	do
	{
	       next= temp;
	   printf("%d\n ",next->info) ;
		temp= next->link;


	}while(next->link!=NULL)   ;
}

void pop()
{
	clrscr();
	printf("\n\nStack is :\n-->") ;
	temp = start;
	do
	{
	       next= temp;
	   printf("%d\n",next->info) ;
		temp= next->link;


	}while(next->link!=NULL)   ;
	printf("\nPoping %d from stack :\n",start->info) ;

	start=start->link;
	printf("\nStack now is :\n-->") ;

	temp = start;
	do
	{
	       next= temp;
	   printf("%d\n ",next->info) ;
		temp= next->link;


	}while(next->link!=NULL)   ;

}

void peep()
{      	int n,i=0,tp,nv=0;
	char ch ;
	clrscr();
		printf("Enter the index no. to change :") ;
		scanf("%d", &n) ;

		temp = start;
	do
	{
		i++;
	       next= temp;
		temp= next->link;
		if(n==i)
		{ tp=next->info;
		}


	}while(next->link!=NULL)   ;
       printf("\n\nThe value at index %d is : %d",n,tp) ;



}
void change()
{
	int n,i=0,tp,nv=0;
	char ch ;
	clrscr();
	printf("\n\nThe stack is :\n-->") ;
		temp = start;
	do
	{
		i++;
	       next= temp;
	   printf("%d\n",next->info) ;
		temp= next->link;
		//if(n==i)
		//{ tp=next->info;
		//}


	}while(next->link!=NULL)   ;
       //	if(n==i)
	{
	//printf("\n\nThe value at index %d is : %d",n,tp) ;
		printf("\n\nDo you want to change any value :");
		fflush(stdin) ;
		scanf("%c",&ch);
	if((ch=='Y')||(ch=='y'))
	{
		printf("Enter the index no. to change :") ;
		scanf("%d", &n) ;


		printf("\nEnter new value :") ;
		fflush(stdin) ;
		scanf("%d", &nv) ;
		temp = start;  i=0;
		do
		{
			i++;
			next= temp;
			temp= next->link;
			if(n==i)
			{ next->info=nv;
			}


		}while(next->link!=NULL)   ;
		printf("\n\nStack now is :\n-->") ;

		temp = start;
		do
		{
		next= temp;
		printf("%d\n ",next->info) ;
		temp= next->link;


		}while(next->link!=NULL)   ;



	}

	}

}

void display()
{

	printf("\n\nStack now is :\n-->") ;

		temp = start;
		do
		{
		next= temp;
		printf("%d\n ",next->info) ;
		temp= next->link;


		}while(next->link!=NULL)   ;



}






