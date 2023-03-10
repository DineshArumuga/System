//4. Write a C program to compare two strings. 

#include<stdio.h>
int str_cmp(char *,char *);
int main()
{
	int i;
	char s[20],d[20];
	printf("Enter the Main string\n");
	scanf("%s",s);
	printf("Enter the Sub string\n");
	scanf("%s",d);
	i=str_cmp(s,d);
	if(i==0)
		printf("String are equal\n");
	else if(i>0)
		printf("Main string is greater,Sub string is smaller\n");
	else
		printf("Main string is lesser,Sub string is greater\n");
}
int str_cmp(char *p,char *q)
{
	int i;
	for(i=0;(p[i]!='\0')&&(p[i]==q[i]);i++);
	return p[i]-q[i];
}
