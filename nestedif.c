#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter a,b,c values");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	 {
	   if(a>c)
	  printf("a is max");
	else
	printf("c is max");
}
    else
    {
    	if(b>c)
    	printf("b is max");
    	else
    	printf("c is max");
	}
	getch();
 
	
}