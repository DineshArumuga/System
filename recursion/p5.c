//WAP to reverse a string using recursion



#include<stdio.h>
char* str_rev(char *,char *);
static int i=0,j=0;
int main()
{
	char s[20],d[20];
	int l;
	printf("Enter the string\n");
	scanf("%s",s);
	for(l=0;s[l];l++);
	i=l;
	str_rev(s,d);
	printf("Reverse string = %s \n",d);
}
char* str_rev(char *str,char *ds)
{
	if(i>0)
	{
		ds[j]=str[i-1];
		i--;j++;
		return str_rev(str,ds);
	}
	else
		ds[j]='\0';
	return ds;
}
