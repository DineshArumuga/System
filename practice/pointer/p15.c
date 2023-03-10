//14. Write a C program to concatenate two strings using pointers.
#include<stdio.h>
char * str_cat(char *,char *);
int main()
{
	printf("14. Write a C program to concatenate two strings using pointers.\n");
	char s[20],d[40];
	printf("Enter the Main string and Substring\n");
	scanf("%s%s",s,d);
	printf("Main string = %s\nSubstring = %s\n",s,d);
	str_cat(s,d);
	printf("Concatenate String = %s\n",d);
}
char * str_cat(char *p,char *q)
{
	int i,j;
	for(i=0;q[i];i++);
	for(j=0;q[i]=p[j];i++,j++);
	return q;

}



