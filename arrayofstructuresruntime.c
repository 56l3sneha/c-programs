#include<stdio.h>
struct student
{
	char name[50];
	int age;
	float marks;
};
void main()
{
	struct student s[100];
	int n;
	printf("enter number of student");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("enter student[%d] name",i+1);
		scanf("%s",s[i].name);
		printf("enter student [%d] age",i+1);
		scanf("%d",&s[i].age);
		printf("enter student[%d] marks",i+1);
		scanf("%f",&s[i].marks);
	}
	for(int i=0;i<n;i++)
	{
		printf("name:%s\n",s[i].name);
		printf("age:%d\n",s[i].age);
		printf("marks:%f\n\n",s[i].marks);
	}
}
