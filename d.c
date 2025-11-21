#include<stdio.h>
#include<conio.h>
void main()
{
	int u,t,a;
    float s;
    printf("enter u,a,t values");
    scanf("%d%d%d",&u,&a,&t);
    s=u*t+(a*t*t)/2;
    printf("displacement %f",s);
    getch();
}