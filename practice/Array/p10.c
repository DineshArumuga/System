//10. Write a C program to find first occurrence of a character in a given string.



#include<stdio.h>
char str_cmp(char *,char );
int space=0;
int main()
{
	int i,j;
	char s[20],d;
	printf("Enter the any string\n");
	scanf(" %[^\n]",s);
	printf("Enter the character\n");
	scanf(" %c",&d);
	char p = str_cmp(s,d);
	if(p==0)
		printf("No words are matching \n");
	else 
		printf("Given string *%c* is found at %d Index \n",p,space); 
}

char str_cmp(char *p,char q)
{
	int i,k,l;
	for(i=0;p[i];i++)
	{
		space++;
		if(p[i]==q)
			return q;
	}
	return 0;
}


