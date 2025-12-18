#include<stdio.h>
void linear(int a[10],int n,int key);
void main()
{
	int a[10],n,i,key;
	printf("enter number of elements in array:\n");
	scanf("%d",&n);
	printf("enter %d array elements:\n",n);
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
}
printf("enter key value to search\n");
scanf("%d",&key);
linear (a,n,key);
}
	void linear (int a[10],int n,int key)
	{
		int i,flag=0;
		for(i=0;i<n;i++)
		{
			if(key==a[i])
		{
			flag=1;
			break;
		}
	   }

	if (flag==1)
	printf("%d found at position %d\n",key ,i+1);
	else
	printf("sorry!%d not found in given elements\n",key);
}