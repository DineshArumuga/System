//16. Write a C program to check whether a number is even or odd using bitwise operator.
#include<stdio.h>
int main()
{
	int x;
	printf("Enter the X value is:\n");
	scanf("%d",&x);
	x&1?printf("Odd Number=%d\n",x):printf("Even Number=%d\n",x);
}

