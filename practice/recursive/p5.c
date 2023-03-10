//5. Write a C program to find reverse of any number using recursion.

#include<stdio.h>
int rev_num(int num,int sum)
{
	if(num!=0)
		return rev_num(num/10,(sum*10)+(num%10));
	else 
		return sum;
}
int main()
{
	int num,rev;
	printf("Enter the number\n");
	scanf("%d",&num);
	rev=rev_num(num,0);
	printf("Original number = %d \n",num);
	printf("Reverse number = %d \n",rev);
}
