#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *ptr=malloc(512);
	char *ptr1=malloc(512);
	int i=1;
	for(i;i<=513;i++)
	{
		ptr[i] = '>';
		ptr1[i] = ptr[i];
	}
	free(ptr);
	free(ptr1);
}
