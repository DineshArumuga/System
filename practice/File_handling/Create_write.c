//Write a C program to create a file and write contents, save and close the file.

#include<stdio.h>
int main()
{
	int i;
	char s[6]={'D','I','N','E','S','H'};
	FILE *fp=fopen("Data.txt","w+");
	if(fp==NULL)
	{
		printf("File is doesn't excits\n");
		return 0;
	}
	for(i=0;s[i];i++)
	{
		fputc(s[i],fp);
	}

	
}

