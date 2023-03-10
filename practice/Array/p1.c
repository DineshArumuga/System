//1. Write a C program to find length of a string.

#include<stdio.h>
int str_len(char *);
int main()
{
	int i;
	char s[20];
	printf("Enter the String\n");
	scanf("%s",s);
	i=str_len(s);
	printf("Lenght of the string %s = %d\n",s,i);
}
int str_len(char *p)
{
	int i;
	for(i=0;p[i];i++);
	return i;
}
