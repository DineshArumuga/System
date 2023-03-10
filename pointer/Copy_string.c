//Write a C program to copy one string to another string and find length of new string using pointers.


#include<stdio.h>
int str_cpy(char *,char *);
int main()
{
	int i;
	char s[20],d[20];
	printf("Enter the string \n");
	scanf("%s",s);
	printf("Source = %s\n",s);
	i=str_cpy(s,d);
	printf("Copy source string into destination\n");
	printf("Destination = %s\n",d);
	printf("Length of the string = %d\n",i);
}
int str_cpy(char *p,char *q)
{
	int i;
	for(i=0;q[i]=p[i];i++);
	return i;
}
