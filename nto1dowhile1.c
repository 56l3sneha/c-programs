#include<stdio.h>
void main()
{
	int n;
	printf("enter n value");
	scanf("%d",&n);
	n=n;
	do
	{
		printf("%d\n",n);
		n--;
	}
	while(n>=1);
}