#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{	int info;
	struct node *link ;

} *start= NULL, *nw, *next ,*temp,*p;

void inf();
void inl();
void delf();
void dell();
void delm();
void display();
void main()
{       int n ;

	s:
	clrscr();

	printf("Implementation of circular linked list :\n\n");
	printf("Select your choice :\n");
	printf("1. Insertion from first :\n") ;
	printf("2. Insertion from last :\n")  ;
	printf("3. Deletion from first :\n");
	printf("4. Deletion from last :\n");
	printf("5. Deletion from middle :\n") ;
	printf("6. Display :\n");
	printf("7. Exit :") ;
	scanf("%d",&n) ;
	switch(n)
	{
	  case 1:	inf();  getch();goto s;
	  case 2:       inl();  getch();goto s;
	  case 3:       delf(); getch();goto s;
	  case 4:       dell(); getch();goto s;
	  case 5:       delm(); getch();goto s;
	  case 6:      	display(); getch(); goto s;
	  case 7:	       break;

	}



    }




void inf()
{       char ch='Y';
	int x;
	clrscr();
	printf("Inserting at first in circular linked list :\n")  ;
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

	printf("\n\nThe circular list created is :\n\n\t") ;
	next = start;
	printf("Start") ;
	do
	{

	   if(start==NULL)
	   {
	      printf("List is empty!!") ;
	      break;
	   }
	  else
	  {
		printf(" -> %d ",next->info) ;
		next= next->link;   }
	  }
	 while(next!=start)   ;
	 next=start;
	 printf("\n\t  ^\n\t  |___") ;
	 do
	  {
		printf("_____") ;
		next= next->link;
	  }while(next!=start)   ;
	 printf("__|");

}

void inl()
{           char ch='Y';
	int x;
	clrscr();
	printf("Inserting at last circular linked list :\n")  ;
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
		   temp->link=nw;
		   nw->link=start;


	    }

	    printf("Do you want to create new node :") ;
	    fflush(stdin);
	    scanf("%c", &ch);

	}while((ch=='y')||(ch=='Y'))   ;

	printf("\n\nThe circular list created is :\n\n\t") ;
	next = start;
	printf("Start") ;
	do
	{

	   if(start==NULL)
	   {
	      printf("List is empty!!") ;
	   }
	  else
	  {
		printf(" -> %d ",next->info) ;
		next= next->link;   }
	  }
	 while(next!=start)   ;
	 next=start;
	 printf("\n\t  ^\n\t  |___") ;
	 do
	  {
		printf("_____") ;
		next= next->link;
	  }while(next!=start)   ;
	 printf("__|");





}

void delf()
{       clrscr();
	printf("\n\nThe circular list is :\n\n\t") ;
	next = start;
	printf("Start") ;
	do
	{

	   if(start==NULL)
	   {
	      printf("\n\nList is empty!!\n\n") ;
	   }
	  else
	  {
		printf(" -> %d ",next->info) ;
		next= next->link;   }
	  }
	 while(next!=start)   ;
	 next=start;
	 printf("\n\t  ^\n\t  |___") ;
	 do
	  {
		printf("_____") ;
		next= next->link;
	  }while(next!=start)   ;
	 printf("__|");
	printf("\n\nDeletion from first :") ;
	printf("\n\nDeleting %d from circular list :\n",start->info) ;
	temp = start;
	if(start->link==start)
	{   start=NULL;
	 }
	else
	{while(temp->link!=start)
	{      temp = temp->link;
	}
	start=start->link;
	temp->link=start;   }

	printf("\n\nThe circular list now is :\n\n\t") ;
	next = start;
	printf("Start") ;
	do
	{

	   if(start==NULL)
	   {
	      printf("\n\nList is empty!!\n\n") ;
	   }
	  else
	  {
		printf(" -> %d ",next->info) ;
		next= next->link;   }
	  }
	 while(next!=start)   ;
	 next=start;
	 printf("\n\t  ^\n\t  |___") ;
	 do
	  {
		printf("_____") ;
		next= next->link;
	  }while(next!=start)   ;
	 printf("__|");



}


void dell()
{       clrscr();
	printf("\n\nThe circular list is :\n\n\t") ;
	next = start;
	printf("Start") ;
	do
	{

	   if(start==NULL)
	   {
	      printf("\n\nList is empty!!\n\n") ;
	   }
	  else
	  {
		printf(" -> %d ",next->info) ;
		next= next->link;   }
	  }
	 while(next!=start)   ;
	 next=start;
	 printf("\n\t  ^\n\t  |___") ;
	 do
	  {
		printf("_____") ;
		next= next->link;
	  }while(next!=start)   ;
	 printf("__|");
	printf("\n\nDeletion from last :") ;
	while(temp->link!=start)
	{    temp = temp->link;
	}
	printf("\n\nDeleting %d from circular list at last :\n",temp->info) ;
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

	printf("\n\nThe circular list now is :\n\n\t") ;
	next = start;
	printf("Start") ;
	do
	{

	   if(start==NULL)
	   {
	      printf("\n\nList is empty!!\n\n") ;
	   }
	  else
	  {
		printf(" -> %d ",next->info) ;
		next= next->link;   }
	  }
	 while(next!=start)   ;
	 next=start;
	 printf("\n\t  ^\n\t  |___") ;
	 do
	  {
		printf("_____") ;
		next= next->link;
	  }while(next!=start)   ;
	 printf("__|");

}

void delm()
{       int n;
	clrscr();
	printf("\n\nThe circular list is :\n\n\t") ;
	next = start;
	printf("Start") ;
	do
	{

	   if(start==NULL)
	   {
	      printf("\n\nList is empty!!\n\n") ;
	   }
	  else
	  {
		printf(" -> %d ",next->info) ;
		next= next->link;   }
	  }
	 while(next!=start)   ;
	 next=start;
	 printf("\n\t  ^\n\t  |___") ;
	 do
	  {
		printf("_____") ;
		next= next->link;
	  }while(next!=start)   ;
	 printf("__|");
	printf("\n\nDeletion from middle :") ;
	printf("\nEnter the value that you want to delete :");
	scanf("%d",&n) ;
	printf("\n\nDeleting %d from circular list at last :\n",n) ;
	temp = start;
	if(temp->info==n)
	{       if(start->link==start)
		{   start=NULL;
		 }
		else
		{while(temp->link!=start)
		{      temp = temp->link;
		}
		start=start->link;
		temp->link=start;
		}
	}
	else
	{while(temp->link!=start)
		{	p=temp;
		temp=temp->link;
		if(temp->info==n)
		{
		   break;
		}
		}
		if(temp->info==n)
		{p->link=temp->link;
		}
		else
		{
		printf("\n\nIndex not found.....") ;
		}

	}
	printf("\n\nThe circular list now is :\n\n\t") ;
	next = start;
	printf("Start") ;
	do
	{

	   if(start==NULL)
	   {
	      printf("\n\nList is empty!!\n\n") ;
	   }
	  else
	  {
		printf(" -> %d ",next->info) ;
		next= next->link;   }
	  }
	 while(next!=start)   ;
	 next=start;
	 printf("\n\t  ^\n\t  |___") ;
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
	printf("\n\nThe circular list is :\n\n\t") ;
	next = start;
	printf("Start") ;
	do
	{

	   if(start==NULL)
	   {
	      printf("\n\nList is empty!!\n\n") ;
	      break;
	   }
	  else
	  {
		printf(" -> %d ",next->info) ;
		next= next->link;   }
	  }
	 while(next!=start)   ;
	 next=start;
	 printf("\n\t  ^\n\t  |___") ;
	 do
	  {
		printf("_____") ;
		next= next->link;
	  }while(next!=start)   ;
	 printf("__|");


}