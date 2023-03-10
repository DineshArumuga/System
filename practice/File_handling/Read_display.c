//Write a C program to read file contents and display on console.
#include<stdio.h>
int main()
{
	char ch;
	FILE *fp = fopen("Data.txt","r");
	if(fp==NULL)
	{
		printf("File doesn't exist\n");
		return 0;
	}
	while((ch = fgetc(fp))!=EOF)
		printf("%c",ch);
}
