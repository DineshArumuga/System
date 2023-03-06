#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct compare
{
	int a;
	char b[20];
};

int main()
{
	struct compare *i,*j;
	i = (struct compare *)malloc(sizeof(struct compare));
	j = (struct compare *)malloc(sizeof(struct compare));
	i->a = 5;
	j->a = 5;
	strcpy(i->b,"hello");
	strcpy(j->b,"World");
	if(i->a == j->a)
	{
		if(strcmp(i->b,j->b)==0)
			printf("Both are match\n");
		else
			printf("one structure variable are different\n");
	}
	else
		printf("Two structure variable are different \n");

}
