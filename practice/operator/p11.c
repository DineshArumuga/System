//11. Write a C program to flip bits of a binary number using bitwise operator.

#include<stdio.h>
int main()
{
	int num,f;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("Original number = %d\n",num);
	f=~num;
	printf("Flip bits = %d\n",f);
}
