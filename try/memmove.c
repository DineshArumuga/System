#include<stdio.h>
#include<string.h>
void my_memmove(void *,const void *,int );
int main()
{
	char s[100],d[100];
	printf("Enter the string line\n");
	scanf(" %[^\n]",s);
	my_memmove(d,s+7,strlen(s));
	printf("%s \n%s\n",s,d);
}
void my_memmove(void *d,const void *s,int n)
{
	char *ds = (char *)d;
	char *str = (char *)s;
	int i;
	for(i=0;i<n;i++)
	{
		ds[i] = str[i];
	}
}
