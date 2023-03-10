//3. Write a C program to find sum of all natural numbers between 1 to n using recursion.

#include<stdio.h>
int sum_natural(int num)
{
	static int sum =0,i;
	if(i<=num)
	{
		sum = sum +i++;
		return sum_natural(num);
	}
	else 	
		return sum;
}
int main()
{
	int num,i;
	printf("Enter the natural number\n");
	scanf("%d",&num);
	i=sum_natural(num);
	printf("Sum of all natural number = %d \n",i);

}

