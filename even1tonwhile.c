#include<stdio.h>
void main()
{
	int n,i;
	printf("enter n value");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(i%2==0)
		printf("%d\t",i);
		i++;
	}
	
}