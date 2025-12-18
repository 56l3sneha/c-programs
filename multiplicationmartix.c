//perform addition of two martrices
#include<stdio.h>
int main(void)
{
	int A[20][20],B[20][20],C[20][20],i,j,k,rows,cols;
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
    for(j=0;j<cols;j++)
    scanf("%d",&C[i][j]);
    for(i=0;i<rows;i++)
    for(j=0;j<cols;j++)
    { C[i][j]=0;
    for(k=0;k<cols;k++)
    C[i][j]=C[i][j]+A[i][k]*B[k][j];
	}
	
}