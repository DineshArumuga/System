//WAP to convert a decimal number to binary using recursion


#include<stdio.h>
static int i=31;
int d_b(int);
int main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	d_b(num);
	printf("\n");
}
int d_b(int num)
{
	if(i>=0)
	{
		printf("%d ",1&(num>>i--));
		return d_b(num);
	}
	return 0;
}
