//8. Write a C program to find reverse of a string.

#include<stdio.h>
void rev_str(char*);
int main()
{
	char s[20];
	printf("Enter the String\n");
	scanf("%s",s);
	printf("String = %s\n",s);
	rev_str(s);
	printf("Reverse of a string = %s\n",s);
}
void rev_str(char *p)
{
	int i,j;
	char temp;
	for(j=0;p[j];j++);
	for(i=0,j=j-1;i<j;i++,j--)
	{
		temp = p[i];
		p[i] = p[j];
		p[j] = temp;
	}
}
