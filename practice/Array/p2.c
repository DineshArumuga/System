//2. Write a C program to copy one string to another string.

#include<stdio.h>
void str_cpy(char *,char *);
int main()
{
	int i;
	char s[20],d[20];
	printf("Enter the string\n");
	scanf("%s",s);
	str_cpy(s,d);
	printf("Main string = %s \t Sub string = %s\n",s,d);
}
void str_cpy(char *p,char *q)
{
	int i;
	for(i=0;q[i]=p[i];i++);
}
