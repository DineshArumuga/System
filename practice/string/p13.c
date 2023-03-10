//Write a C program to count frequency of each character in a string.


#include<stdio.h>
char match_char(char *);
int q=0;
int main()
{
	int i,j;
	char s[20],d;
	printf("Enter the any string\n");
	scanf("%s",s);
	
	d = match_char(s);
	if(d)
		printf("'%c' found %d times \n",d,q+1); 
	else 
		printf("No character are matching \n");
}

char match_char(char *p)
{
	int i,j,l=0;
	char d;
	for(i=0;p[i];i++)
	{
		l=0;
		for(j=i+1;p[j];j++)
		{	if(p[i]==p[j])
			{
				l++;
			}			
		}
		if(l>q)
		{
			q=l;
			d=p[i];
		}

	}
	return d;
}

