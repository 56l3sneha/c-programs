#include<stdio.h>
#include<string.h>
void main()
{
	char a[]="Hyderabad";
	int n;
	printf("%s\n",a);
	n=strlen(a);
	printf("%d\n",n);
	printf("%d",sizeof(a));
}