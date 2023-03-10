//Write a C program to find first occurrence of a word in a given string.


#include<stdio.h>
char* str_cmp(char *,char *);
int space=0;
int main()
{
	int i,j;
	char s[100],d[20];
	printf("Enter the any string line\n");
	scanf(" %[^\n]",s);
	printf("Enter the sub string\n");
	scanf("%s",d);
	char *p = str_cmp(s,d);
	if(p==NULL)
		printf("No words are matching \n");
	else 
		printf("Given string *%s* is found at %d Index \n",p,space+1); 
}

char* str_cmp(char *p,char *q)
{
	int i,j,k,l;
	for(l=0;q[l];l++);
	for(i=0,j=0;p[i];i++)
	{
		if(p[i]==' ')
			space++;
		if(p[i]==q[j])
		{
			for(j=0,k=i;q[j];j++,k++)
			{
				if(p[k]!=q[j])
					break;
			}
			if(j==l)
				return q;
			j=0;
		}
	}
	return NULL;
}


