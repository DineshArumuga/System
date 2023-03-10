//1. Write a C program to print all natural numbers between 1 to n using recursion.

#include<stdio.h>
void natural(int num,int i)
{
	if(i<=num)
	{
		printf("%d ",i);
		return natural(num,++i);
	}
}
int main()
{
	int num;
	printf("Enter the natural number\n");
	scanf("%d",&num);
	natural(num,1);

}

