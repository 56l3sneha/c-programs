#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],r,c,i,j ,sum[10][10];
	printf("enter rows,columns of matrix A & B");
	scanf("%d%d",&r,&c);
	printf("enter the values of matrix A\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the values of matrixB\n");
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
		printf("sum value are");
		for(i=0;i<r;i++)
	{
			for(j=0;j<c;j++)
			{
				sum[i][j]=a[i][j]+b[i][j];
				printf("%d\t",sum[i][j]);
			}
			printf("\n");
		}
}