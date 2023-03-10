//Write a C program to check Least Significant Bit (LSB) of a number is set or not.

#include<stdio.h>
int main()
{
	typedef int i;
	i num;
	printf("Enter the number \n");
	scanf("%d",&num);
	num&1?puts("Set\n"):puts("Clear\n");
		
}
