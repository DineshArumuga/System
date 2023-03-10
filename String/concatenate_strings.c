//Write a C program to concatenate two strings and find length of a new string.


#include<stdio.h>
char* str_cat(char *,char *);
int str_len(char *);
int main()
{
	int len;
	char s[20],d[40];
	printf("Enter the two string \n");
	scanf("%s%s",s,d);
	char *p = str_cat(s,d);
	len = str_len(p);
	printf("String concatenate --> %s\n",p);
	printf("String lenght %d\n",len);

}

char* str_cat(char *p,char *q)
{
	int i,j,l;
	for(i=0;q[i];i++);
	for(j=0;q[i]=p[j];i++,j++);
	return q;

}

int str_len(char *p)
{
	int i;
	for(i=0;p[i];i++);
	return i;
}



