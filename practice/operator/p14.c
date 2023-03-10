//Write a C program to convert decimal to binary number system using bitwise operator.


#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("Binary of %d = ",num);
	for(i=31;i>=0;i--)
	printf("%d ",(num>>i)&1);
	printf("\n");
}
