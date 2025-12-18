#include<stdio.h>
void main()
{
	int n,r,s=06,t;
	printf("enter n value");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		s=s+r*r*r;
		n=n/10;
	}
	if(t==s)
	printf("given number is armstrong");
	else
	printf("given number is not a armstrong");
}