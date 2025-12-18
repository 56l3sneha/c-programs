#include<stdio.h>
void main()
{
	int n,i;
	printf("enter n value");
	scanf("%d",&n);
	i=n;
	do
	{
		printf("%d\n",i);
		i--;
	}
	while(i>=1);
}