#include"main.h"

void pattern(void)
{
	printf("Var is divisible by 10\n");
	int i,j,s;
	char ch = 96;
	for(i=0;i<5;i++)
	{
		for(s=0;s<5-i;s++)
			printf(" ");
		for(j=1;j<=i+1;j++)
			printf("%c ",ch+j);
		printf("\n");
	}
}
