#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5]={5,2,9,1,6};
	int n=5;
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("sorted array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	getch();
	return 0;
}