#include<stdio.h>
void main()
{
	int n,n1=0,n2=1,n3,i;
	printf("enter length of fibonacci value");
	scanf("%d",&n);
	printf("%d\t%d\t",n1,n2);
	for(i=1;i<=n-2;i++)
	{
		n3=n1+n2;
		printf("%d\t",n3);
		n1=n2;
		n2=n3;
	}
}