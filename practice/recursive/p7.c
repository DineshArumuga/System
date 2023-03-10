//7. Write a C program to find sum of digits of a given number using recursion


#include<stdio.h>
int sum_digit(int i,int sum)
{
	if(i!=0)
		return sum_digit(i/10,sum+(i%10));
	return sum;
}
int main()
{
	int i,sum=0;
	printf("Enter the number \n");
	scanf("%d",&i);
	sum=sum_digit(i,sum);
	printf("Sum of digits = %d\n",sum);
}

