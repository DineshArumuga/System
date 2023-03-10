//Write a C program to check whether a string is palindrome or not.

#include<stdio.h>
int palindrome(char *);
int a=0;
int main()
{
	int i;
	char s[20];
	printf("Enter the any string \n");
//	fgets(s,20,stdin);
	scanf("%s",s);
	i=palindrome(s);
	if(i>=(a/2))
		printf("%s is a palindrome\n",s);
	else 
		printf("Not a palindrome\n");
}
int palindrome(char *p)
{
	int i,j;
	for(a=0;p[a];a++);
	for(i=0,j=a-1;i<j;i++,j--)
	{
		if(p[i]!=p[j])
			break;
	}
	return i;

}
