#include<stdio.h>
#include<conio.h>

void main()
{          int n,i,a[50], low=0 , high,mid,in,o=0;
	clrscr();
	printf("Enter the size of array :") ;
	scanf("%d",&high);
	printf("Enter the elements of the array :\n") ;

	for(i=1; i<=high; i++)
	{
		scanf("%d",&a[i]) ;

	}

	printf("\nEnter the no to search :") ;
	scanf("%d",&n);
	printf("\n") ;
	while(a[0]!=n)
	{
	     mid = (low+high)/2 ;
	     if(a[mid]==n)
	     {    o=mid ;
		break;
	     }
	     if(a[mid]>n)
	     {     high = mid -1;

	     }
	     else if(a[mid]<n)
	     {
		  low = mid +1 ;
	     }


	 }
	 printf("\nPosition is :%d",o) ;

	 getch();
}