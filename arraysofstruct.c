#include<stdio.h>
//structure defination
struct s
{
	int var;
	char c;
 };
 void main() 
 {
 	struct s arr[5]={{1,'a'},{2,'b'},{3,'c'},{4,'d'},{5,'e'}};
	 //traverse array
	 for(int i=0;i<5;i++)
	 printf("%d%c\n",arr[i].var,arr[i].c);
	 
}
	 
	 
	 
	 
 