//13. Write a C program to rotate bits of a given number.
#include<stdio.h>
int main()
{

	int num,num1,num2,i,j,pos;
	printf("Enter the number :\n");
	scanf("%d",&num);
	for(i=31;i>=0;i--)
		printf("%d ",num>>i&1);
	printf("\nEnter the bit position\n");
	scanf("%d",&pos);
	num1=num<<31-pos;
	num2=num>>pos+1;
	num=num1|num2;
	for(i=31;i>=0;i--)
		printf("%d ",num>>i&1);
	printf("\n");
}



