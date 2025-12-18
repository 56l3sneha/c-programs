#include<stdio.h>
#include<string.h>
void main()
{
	char a[100]="Dennies";
	char b[100];
	printf("%s\n",a);
	strcpy(b,a);
	printf("%s",b);
}