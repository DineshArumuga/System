//Write a C program to append content to a file.
#include<stdio.h>
int main()
{
	int i;
	char s[20]="-THUNDERSOFT";
	FILE *fp = fopen("Data.txt","a");
	if(fp == NULL)
	{
		printf("File is don't not excist\n");
		return 0;
	}
	for(i=0;s[i];i++)
	{
		fputc(s[i],fp);
	}

}
