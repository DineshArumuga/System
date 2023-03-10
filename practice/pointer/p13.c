//13. Write a C program to copy one string to another using pointers.
#include<stdio.h>
char * str_cpy(char *);
int main()
{
	char s[20],*d;
	printf("Enter the main string\n");
	scanf("%s",s);
	d = str_cpy(s);
	printf("Main string copy into another \nSource string = %s\nSubstring = %s\n",s,d);
}
char *str_cpy(char *p)
{
	int i;char *d;
	for(i=0;d[i]=p[i];i++);
	return d;
}
