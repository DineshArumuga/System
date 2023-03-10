//Write a program to concanate two string
#include<stdio.h>
void str_cat(char *p,char *d)
{
	int i,j;
	for(i=0;p[i];i++);
	for(j=0;p[i]=d[j];i++,j++);
}
int main()
{
	char s[20],d[40];
	printf("Enter the First string\n");
	scanf("%s",s);
	printf("Enter the second string\n");
	scanf("%s",d);
	str_cat(s,d);
	printf("Concanete Two string =%s \n",d);

}
