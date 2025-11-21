#include<stdio.h>
#include<conio.h>
void main()
{
	int a,v,u,t;
	printf("enter a,u,t values");
	scanf("%d%d%d",&a,&u,&t);
	v=u+a*t;
	printf("velocity %d",v);
	getch();
}