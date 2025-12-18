#include<stdio.h>
void main()
{
	char a[100]="abxy";
	char b[100]="adpq";
	int n;
	n=strcmp(a,b);
	printf("%d",n);
}