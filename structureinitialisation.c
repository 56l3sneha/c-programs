#include<stdio.h>
void main()
{
	struct student
	{
		int rno;
		char name[50];
		float avg;
	};
	struct student s1={7,"Sneha",67.9};
	printf("%d %s %f",s1.rno,s1.name,s1.avg);
}