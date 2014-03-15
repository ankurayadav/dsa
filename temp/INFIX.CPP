#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

char s[30],ar[30],polish[30];
int top=0;

int f(char) ;
int g(char);
char pop(char *,int &) ;
void push(char *,int &,char) ;
int r(char) ;

void main()
{
	 char ch,tempc,tem[10];
	 int rank,i=0;
	 clrscr();
	 printf("Enter a infix expression :");
	 fflush(stdin) ;
	 scanf("%s",ar) ;

	 s[top]='(';

	polish[0]='\0';

	 rank = 0;

	 ch=ar[i++];

	 do
	 {

	     do
	     {
		 if(f(ch)>=g(s[top]))
		 {
		     break;
		 }
		 tempc = pop(s,top) ;
		 tem[0]=tempc;
		 tem[1]='\0';
		 strcat(polish,tem) ;
		 rank=rank+r(tempc) ;
		 if(rank<1)
		 {
		     printf("\n\nIvalid") ;
		      break;
		 }


	     }while(f(ch)<g(s[top])) ;


	     if(f(ch)!=g(s[top]))
	     {
		 push(s,top,ch)  ;

	     }
	     else
	     {      pop(s,top)   ;

	     }

	     ch=ar[i++] ;


	 }while (ch!='\0');

		 if((top!=0)||(rank!=1))
	 {
	      printf("\n\nInvalid") ;
	 }

	 else
	 {

	      printf("\n\nPolish expression is : %s",polish)  ;
	 }


	 getch();
}


int f(char ch)
{
	if((ch=='+')||(ch=='-'))
	{
	   return 1;

	}
	else if((ch=='*')||(ch=='/'))
	{
	   return 3;
	}
	else if(ch=='^')
	{

	   return 6;
	}
	else if(((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z')))
	{
	   return 7;
	}
	else if(ch=='(')
	{
	   return 9;
	}
	else if(ch==')')
	{
	   return 0;

	}

	return -1;
}


int g(char ch)
{
	if((ch=='+')||(ch=='-'))
	{
	   return 2;

	}
	else if((ch=='*')||(ch=='/'))
	{
	   return 4;
	}
	else if(ch=='^')
	{

	   return 5;
	}
	else if(((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z')))
	{
	   return 8;
	}
	else if(ch=='(')
	{
	   return 0;
	}

      return -1;

}

char pop(char *sa,int &top)
{
	char temp;
	temp=sa[top]  ;
	top=top-1;
	return temp;


}


void push(char *sa,int &top,char input)
{
	top=top+1;
	sa[top]=input;

}


int r(char ch)
{
	if((ch=='+')||(ch=='-'))
	{
	   return -1;

	}
	else if((ch=='*')||(ch=='/'))
	{
	   return -1;
	}
	else if(ch=='^')
	{

	   return -1;
	}
	else if(((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z')))
	{
	   return 1;
	}

      return -1;

}