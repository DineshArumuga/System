//8. Write a C program to find factorial of any number using recursion
#include<stdio.h>
int factorial(int ,int );
int main()
{
	int num,i;
	printf("Enter the number\n");
	scanf("%d",&num);
	i=factorial(num,1);
	printf("Factorial %d! = %d\n",num,i);
}
int factorial(int n,int i)
{
	if(n>0)
		return factorial(n,i*n--);
	return i;
}
