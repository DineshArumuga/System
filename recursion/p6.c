//WAP to find the first capital letter in a string using recursion.


#include<stdio.h>

static int i=0,j;
char first_captial(char *);

int main()
{
	char s[20],d;
	printf("Enter the string \n");
	scanf("%s",s);
	for(i=0;s[i];i++);
	d=first_captial(s);
	if(d != 0)
		printf("First capital letter is *%c* in %s\n",d,s);
	else 
		printf("No Capital letter\n");
}

char first_captial(char *s)
{
	char ds;
	if(j<i)
	{
		if((s[j]>=65)&&(s[j]<=92))
		{
			ds=s[j];
			return ds;
		}
		j++;
		return first_captial(s);
	}
	return 0;

		
}

