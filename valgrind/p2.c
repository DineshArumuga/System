#include<stdio.h>
#include<stdlib.h>
void get_mem()
{
	char *ptr;
	ptr = malloc(10);
}
int main()
{
	int i;
	char *p = malloc(100);
	char *p1 = malloc(100);
	p1 = p;
	free(p);
	free(p1);
	for(i=0;i<512;i++)
		get_mem();
}
