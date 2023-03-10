//Write a C program to count characters, words and lines in a text file.

#include<stdio.h>
int main()
{
	int character=0,word=0,line=0;
	FILE *fp = fopen("Data.txt","r");
	char ch;
	if(fp==NULL)
	{
		printf("File doesn't exist\n");
		return 0;
	}
	while((ch=fgetc(fp))!=EOF)
	{
		if(((ch>=65)&&(ch<=92))||((ch>=97)&&(ch<=122)))
			character++;
		if(ch==' ')
			word++;
		if(ch=='\n')
			line++;
	}
	printf("No.of character = %d\nNo.of word = %d\nNo.of lines = %d\n",character,word,line);
}
