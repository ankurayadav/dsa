#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,a[3][3]  ;
	clrscr();
	printf("Enter the elements of matrix in row major :\n\n") ;

	for(i=0; i<3; i++)
	{
	   for(j=0; j<3; j++)
	   {
		printf("Element %d, %d :",i,j);
		scanf("%d",&a[i][j]);
	   }
	   printf("\n");

	}
		for(i=0; i<3; i++)
	{
	   for(j=0; j<3; j++)
	   {
		printf("%d  ",a[i][j]);
	   }
	   printf("\n");

	}

		printf("\n\nDisplaying matrix in colum major :\n\n") ;

	for(i=0; i<3; i++)
	{
	   for(j=0; j<3; j++)
	   {
		printf("%d   ",a[j][i]) ;
	   }
	   printf("\n") ;
	}

	getch();

}