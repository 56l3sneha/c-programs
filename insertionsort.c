#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5]={3,1,5,2,8};
	int n=5;
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0&&a[j]>key)
	{
		a[j+1]=a[j];
		j=j-1;
	}
	a[j+1]=key;
  }
printf("sorted array:");
for(i=0;i<n;i++)
{
	printf("%d",a[i]);
}
getch();
return 0;
}