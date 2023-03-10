//3. Write a C program to concatenate two strings.

#include<stdio.h>
void str_cat(char *,char *);
int main()
{
	char s[40],d[20];
	printf("Enter the Main string\n");
	scanf("%s",s);
	printf("Enter the Sub string\n");
	scanf("%s",d);
	printf("Main string = %s\t Sub string = %s\n",s,d);
	str_cat(s,d);
	printf("Concatenate string = %s\n",s);
}
void str_cat(char *p,char *q)
{
	int i,j;
	for(i=0;q[i];i++);
	for(j=0;p[i]=q[j];i++,j++);
}
