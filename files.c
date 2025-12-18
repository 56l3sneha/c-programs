#include<stdio.h>
void main()
{
	FILE *fp;
	char c;
	printf("file handling\n");
	fp=fopen("demo.txt","w");
	while((c=getchar())!=EOF)
	{
		putc(c,fp);
	}
	fclose(fp);
	printf("data entered:\n");
	fp=fopen("demo.txt","r");
	while((c=getc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
}