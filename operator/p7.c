//Write a C program to swap two numbers using bitwise operator.


#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the two number\nNumber 1 = ");
	scanf("%d",&num1);
	printf("Number 2 = ");
	scanf("%d",&num2);
	num1^=num2^=num1^=num2;
	printf("\nAfter swapping two number");
	printf("\nNumber 1 = %d\nNumber 2 = %d\n",num1,num2);
}
