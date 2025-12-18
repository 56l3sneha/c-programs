#include<stdio.h>
struct employee
{
	char name[10];
	float salary;
	struct dob
	{
		int d,m,y;
	}d1;
};
void main()	
{
	struct employee e1={"sreeja",65000,{29,12,2006}};
	printf("name:%s\n",e1.name);
	printf("salary:%f\n",e1.salary);
	printf("date of birth:%d/%d/%d\n",e1.d1.d,e1.d1.m,e1.d1.y);
}
