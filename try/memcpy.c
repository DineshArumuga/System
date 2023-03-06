#include<stdio.h>
#include<string.h>
void *my_memcpy(void *,const void *,size_t );
int main()
{
	char s[100],d[100];
	printf("Enter the any string line \n");
	scanf(" %[^\n]",s);
	my_memcpy(d,s,5);
	printf("%s %s\n",s,d);
}
void *my_memcpy(void *d,const void *s,size_t n)
{
	char *str = (char *)s;
	char *ds  = (char *)d;
	int i;
	for(i=0;i<n;i++)
	{
		ds[i] = str[i];
	}
}
