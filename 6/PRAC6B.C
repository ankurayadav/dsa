#include<stdio.h>
#include<conio.h>

int a[10];
void qsort(int LB,int UB);

void main()
{
	int i,b;
	clrscr();
	printf("Program to implement Quick Sort :\n\n");
	printf("Enter the number of elemnts you want to enter :");
	scanf("%d",&b);
	printf("\n");
	printf("Enter values :\n");
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}

	qsort(0,i-1);

	printf("\n\nSorted array is:\n");

	for(i=0;i<b;i++)
	{
		printf("%d ",a[i]);
	}

	getch();
}


void qsort(int LB,int UB)
{
	int flag=1,temp,i,j,key;


	if(LB<UB)
	{
		i=LB;
		j=UB;
		key=a[(i+j)/2];

		while(i<j)
		{

			while(a[i]<key)
				i++;

			while(a[j]>key)
				j--;

			if(i<=j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				i++;
				j--;
			}

		}


		if(LB<j)
			qsort(LB,j);
		if(UB>i)
			qsort(i,UB);
	}
}