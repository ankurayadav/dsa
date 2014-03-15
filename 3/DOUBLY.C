#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{	int info;
	struct node *next ;
	struct node *prev ;

}  *nw, *temp,*p,*right=NULL,*left=NULL;

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

	printf("Implementation of doubly linked list :\n\n");
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
	printf("Inserting at first in doubly linked list :\n")  ;
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
	    if(right==NULL)
	    {   nw->prev=NULL;
		nw->next=NULL;
		left=right=nw;
	       }
	    else
	    {    left->prev=nw;
		 nw->prev=NULL;
		 nw->next=left;
		 left=nw;
	    }

	    printf("Do you want to create new node :") ;
	    fflush(stdin);
	    scanf("%c", &ch);

	}while((ch=='y')||(ch=='Y'))   ;

	printf("\n\nThe doubly list created is :\n\n\t") ;
	temp = left;
	do
	{

	   if(temp==NULL)
	   {
	      printf("List is empty!!") ;
	      break;
	   }
	  else
	  {
		printf("%d <--> ",temp->info) ;
		temp= temp->next;   }
	  }
	 while(temp!=NULL)   ;
	 printf("NULL");

}

void inl()
{       char ch='Y';
	int x;
	clrscr();
	printf("Inserting at first in doubly linked list :\n")  ;
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
	    if(left==NULL)
	    {   nw->prev=NULL;
		nw->next=NULL;
		left=right=nw;
	       }
	    else
	    {    right->next=nw;
		 nw->prev=right;
		 nw->next=NULL;
		 right=nw;
	    }

	    printf("Do you want to create new node :") ;
	    fflush(stdin);
	    scanf("%c", &ch);

	}while((ch=='y')||(ch=='Y'))   ;

	printf("\n\nThe doubly list created is :\n\n\t") ;
	temp = left;
	do
	{

	   if(temp==NULL)
	   {
	      printf("List is empty!!") ;
	      break;
	   }
	  else
	  {
		printf("%d <-->",temp->info) ;
		temp= temp->next;   }
	  }
	 while(temp!=NULL)   ;
	 printf("NULL")  ;



}

void delf()
{       clrscr();

	printf("\n\nThe doubly list is :\n\n\t") ;
	temp = left;
	do
	{

	   if(temp==NULL)
	   {
	      printf("List is empty!!") ;
	      break;
	   }
	  else
	  {
		printf("%d <-->",temp->info) ;
		temp= temp->next;   }
	  }
	 while(temp!=NULL)   ;
	 printf("NULL") ;

	printf("\n\nDeletion from first :") ;
	printf("\n\nDeleting %d from doubly list :\n",left->info) ;
	if(left!=NULL)
	{left=left->next ; }
	else
	{left=right=NULL; }
	printf("\n\nThe doubly list now is :\n\n\t") ;
	temp=left;
	do
	{

	   if(temp==NULL)
	   {
	      printf("List is empty!!") ;
	      break;
	   }
	  else
	  {
		printf("%d <-->",temp->info) ;
		temp= temp->next;   }
	  }
	 while(temp!=NULL)   ;
	 printf("NULL");
}


void dell()
{        clrscr();

	printf("\n\nThe doubly list is :\n\n\t") ;
	temp = left;
	do
	{

	   if(temp==NULL)
	   {
	      printf("List is empty!!") ;
	      break;
	   }
	  else
	  {
		printf("%d <-->",temp->info) ;
		temp= temp->next;   }
	  }
	 while(temp!=NULL)   ;
	 printf("NULL");

	printf("\n\nDeletion from last :") ;
	printf("\n\nDeleting %d from doubly list :\n",right->info) ;
	if(right!=NULL)
	{right=right->prev;
	right->next=NULL;   }
	if(right==NULL)
	{
		left=right=NULL;
	}
	printf("\n\nThe doubly list now is :\n\n\t") ;
	temp = left;
	do
	{

	   if(temp==NULL)
	   {
	      printf("List is empty!!") ;
	      break;
	   }
	  else
	  {
		printf("%d <-->",temp->info) ;
		temp= temp->next;   }
	  }
	 while(temp!=NULL)   ;
	 printf("NULL");

}

void delm()
{       int n;
	clrscr();

	printf("\n\nThe doubly list is :\n\n\t") ;
	temp = left;
	do
	{

	   if(temp==NULL)
	   {
	      printf("List is empty!!") ;
	      break;
	   }
	  else
	  {
		printf("%d <-->",temp->info) ;
		temp= temp->next;   }
	  }
	 while(temp!=NULL)   ;
	 printf("NULL");

	printf("\n\nDeletion from middle :") ;
	printf("\nEnter the value that you want to delete :");
	scanf("%d",&n) ;
	printf("\n\nDeleting %d from doubly list at last :\n",n) ;
	temp = left;
	if(temp->info==n)
	{      	if(left!=NULL)
	{left=left->next ; }
	else
	{left=right=NULL; }

	}
	else if(right->info==n)
	{       	if(right!=NULL)
		{right=right->prev;
		right->next=NULL;   }
		if(right==NULL)
		{
			left=right=NULL;
		}

	}
	else
	{	while(temp->next!=NULL)
		{     if(temp->info==n)
			{
			break;
			}
			temp=temp->next;
		}
		if(temp->info==n)
		{	p=temp->prev;
			p->next=temp->next;
			(temp->next)->prev=p;
		}
		else
		{
		printf("\n\nIndex not found.....") ;
		}

	}


	printf("\n\nThe doubly list is :\n\n\t") ;
	temp = left;
	do
	{

	   if(temp==NULL)
	   {
	      printf("List is empty!!") ;
	      break;
	   }
	  else
	  {
		printf("%d <-->",temp->info) ;
		temp= temp->next;   }
	  }
	 while(temp!=NULL)   ;
	 printf("NULL");




}

void display()
{       clrscr();

	printf("\n\nThe doubly list is :\n\n\t") ;
	temp = left;
	do
	{

	   if(temp==NULL)
	   {
	      printf("List is empty!!") ;
	      break;
	   }
	  else
	  {
		printf("%d <-->",temp->info) ;
		temp= temp->next;   }
	  }
	 while(temp!=NULL)   ;
	 printf("NULL");

}