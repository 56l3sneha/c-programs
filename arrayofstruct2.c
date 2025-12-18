#include<stdio.h>
struct student
{
	char name[50];
	int age;
	float marks;
};
void main()
{
	struct student s[3]={
	{"dennies",20,85.5},
	{"rossum",22,90.0},
	{"gosling",25,78.0}
};
for(int i=0;i<3;i++)
{
	printf("student%d:\n",i+1);
	printf("name:%s\n",s[i].name);
	printf("age:%d\n",s[i].age);
	printf("marks:%f\n\n",s[i].marks);
}	
}