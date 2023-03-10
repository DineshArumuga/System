//Write a C program to compare two files.
#include<stdio.h>
int main()
{
	char ch,ch1;
	FILE *fp = fopen("Data.txt","r");
	FILE *fs = fopen("Data1.txt","r");
	if((fp == NULL)||(fs == NULL))
	{
		printf("File is don't excist\n");
		return 0;
	}
	while(((ch = fgetc(fp))!=EOF)&&((ch1 = fgetc(fs))!= EOF))
	{
		if(ch!=ch1)
		{
			printf("Not matching\n");
			return 0;
		}
	}
	printf("Both files are matching\n");
}
