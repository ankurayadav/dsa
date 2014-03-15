#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void main()
{
	int n,*a,i,j;
	clrscr();
	printf("Program to perform insertion sort :");
	printf("\nEnter the number of elements you want to enter :");
	scanf("%d",&n);
	a=(int*) calloc((n*sizeof(int)),sizeof(int));
	printf("Enter the elements of array: \n");
	for(i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		 for(j=i;j>0;--j)
		 {
			if(a[j]<a[j-1])
			{
				a[j]=a[j]+a[j-1];
				a[j-1]=a[j]-a[j-1];
				a[j]=a[j]-a[j-1];
			}

		 }
	}
	printf("\nSorted array is :\n");
	for(i=0;i<n;++i)
		printf("%d ",a[i]);
	free(a);
	getch();
}