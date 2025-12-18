#include<stdio.h>
void main()
{
char a[100];
char t[100];
int n;
printf("enter any string in array a");
gets(a)	;
strcpy(t,a);
strrev(a);
n=strcmp(a,t);
if(n==0)
printf("the given is palindrome");
else
printf("the given is not palindrome");

}
