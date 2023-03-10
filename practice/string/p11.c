//Write a C program to count occurrences of a character in given string.

#include<stdio.h>
char str_cmp(char *,char );
int space=0;
int main()
{
	int i,j;
	char s[20],d;
	printf("Enter the any string\n");
	scanf("%s",s);
	printf("Enter the character\n");
	scanf(" %c",&d);
	char p = str_cmp(s,d);
	if(p==0)
		printf("No character are matching \n");
	else 
		printf("Given character *%c* is found at %d Index \n",p,space); 
}

char str_cmp(char *p,char q)
{
	int i,j,k,l;
	for(i=0,j=0;p[i];i++)
	{
		space++;
		if(p[i]==q)
			return q;
	}
	return 0;
}

