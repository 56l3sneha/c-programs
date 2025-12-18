#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,temp;
    printf("enter a,b values");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("swapinga and b are%d %d",a,b);
	getch();	
}