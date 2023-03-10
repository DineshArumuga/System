//WAP to check whether a given String is palindrome or not

#include<stdio.h>
void palidrome(char *);
int main()
{
	char s[20];
	printf("Enter the string\n");
	scanf("%s",s);
	palidrome(s);
}
void palidrome(char *s)
{
	int i,j;
	for(i=0;s[i];i++);
	for(j=0;j<=i;j++,i--)
	{
		if(s[j]!=s[i])
			break;
	}
	if(j>i)
		printf("Given string is %s palindrome\n",s);
	else
		printf("Given string is %s Not a palidrome\n",s);

}
