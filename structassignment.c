#include<stdio.h>
void main()
{
	struct student
	{
		int rno;
		char name[50];
		float avg;
	};
	struct student s1;
	s1.rno=103;
	strcpy(s1.name,"Dennies");
	s1.avg=9.6;
	printf("%d%s%f",s1.rno,s1.name,s1.avg);
}