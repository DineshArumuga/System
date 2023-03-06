#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *p = malloc(100);
	char *p1 = malloc(100);
	p1 = p;
	free(p);
	free(p1);
}
