#include<stdio.h>
void main()
{
	int a[3][2],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("the 2d array values are \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
	
