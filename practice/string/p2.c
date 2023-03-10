//write a program to copy one string to another string
#include<stdio.h>
void str_cpy(char *p,char *q)
{
	int i;
	for(i=0;p[i]=q[i];i++);
}
int main()
{
	char s[20],d[20];
	printf("Enter the any string\n");
	scanf("%s",s);
	str_cpy(d,s);
	printf("Source string = %s\nDistination string = %s\n",s,d);
}


