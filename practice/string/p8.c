//Write a C program to find reverse of a string.
#include<stdio.h>
void rev_str(char *p)
{
	int i,j,l;char temp;
	for(l=0;p[l];l++);
	for(i=0,j=l-1;i<j;i++,j--)
	{
		temp = p[i];
		p[i] = p[j];
		p[j] = temp;
	}
}
int main()
{
	char s[20];
	printf("Enter the any string\n");
	scanf("%s",s);
	printf("String = %s\n",s);
	rev_str(s);
	printf("Reverse String = %s\n",s);
}
