//perform addition of two martrices
#include<stdio.h>
int main(void)
{
	int A[20][20],B[20][20],C[20][20],i,j,rows,cols;
	printf("enter the mumber of rows");
	scanf("%d",&rows);
	printf("\nenter the number of columns");
	scanf("%d",&cols);
	printf("\nenter the values for A[%d][%d]:",rows,cols);
	for(i=0;i<rows;i++)
	for(j=0;j<cols;j++)
	scanf("%d",&A[i][j]);
	printf("\n enter values for B[%d][%d]:",rows,cols);
	for(i=0;i<rows;i++)
	for(j=0;j<cols;j++)
	scanf("%d",&B[i][j]);
	for(i=0;i<rows;i++)
	for(j=0;j<cols;j++)
	C[i][j]=A[i][j]+B[i][j];
	printf("\nresultant martix C[%d][%d]:",rows,cols);
	for(i=0;i<rows;i++)
    { for(j=0;j<cols;j++)
    printf("%d),C[i][j]");
    printf("\n");
	}
}