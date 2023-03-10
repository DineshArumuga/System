//4. Write a C program to find sum of all even or odd numbers in given range using recursion.

#include<stdio.h>

static int sum=0,i = 0;
int sum_fun(int num)
{
	if(++i<=num)
	{
		if(i%2==0)
			sum = sum + i;
		return sum_fun(num);
	}
	else
		return sum;


}
int main()
{
	int num,sum;
	printf("Enter the number\n");
	scanf("%d",&num);
	sum=sum_fun(num);
	printf("Sum of all even = %d\n",sum);
}
