//2. Write a C program to print all even or odd numbers in given range using recursion

#include<stdio.h>

void num_fun(int num)
{
	static int i = 1;
	if(i<=num)
	{
		if(i%2==0)
			printf("%d ",i++);
		return num_fun(num);
	}


}
int main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	num_fun(num);
}
