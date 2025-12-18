#include<stdio.h>
void main()
{
	int n,i;
	printf("enter n value");
	scanf("%d",&n);
	i=n;
	do
{
	if(i%2==1)
	printf("%d\t",i);
	i--;
}
  while(i>=1);
}