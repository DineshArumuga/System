//Write a program to find lenght of the string
#include<stdio.h>
int str_len(char *p)
{
	int i;
	for(i=0;p[i];i++);
	return i;
}
int main()
{
	char s[20];int i;
	printf("Enter the any string\n");
	scanf("%s",s);
	i=str_len(s);
	printf("length of string *%s* = %d \n",s,i);
}
