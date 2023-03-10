//Write a C program to copy contents from one file to another file.

#include<stdio.h>
int main()
{
	char ch;
	FILE *fp = fopen("Data.txt","r");
	FILE *fs = fopen("Data1.txt","w");
	if(fp == NULL)
	{
		printf("File is doesn't exist\n");
		return 0;
	}
	while((ch = fgetc(fp))!=EOF)
		fputc(ch,fs);

}
