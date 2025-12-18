#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,i,max,min;
	printf("enter n value");
	scanf("%d",&n);
	for(i=0;i<n;i++)
   {
    printf("enter a[%d]",i);
    scanf("%d",&a[i]);
   }
   max=a[0];
   min=a[0];
   for(i=0;i<n;i++)
   {
   	if(a[i]>max)
   	max=a[i];
   	if(a[i]<min)
   	min=a[i];
   }
   printf("max and min value%d%d",max,min);
   getch();
}