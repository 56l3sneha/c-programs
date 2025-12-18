#include<stdio.h>
void main()
{
	int n,i;
	printf("enter n value");
	scanf("%d",&n);
	i=1;
	do
	{
		printf("%d\n",i);
		i++;
	}
	while(i<=n);
}