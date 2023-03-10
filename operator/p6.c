//Write a C program to toggle nth bit of a number.


#include<stdio.h>
int main()
{
	int i,pos,num;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("Before the toggle a bit\n");
	for(i=31;i>=0;i--)
		printf("%d ",1&(num>>i));
	printf("\n");

	printf("Enter the toggle bit position\n");
	scanf("%d",&pos);
	num=num^(1<<pos);

	for(i=31;i>=0;i--)
		printf("%d ",1&(num>>i));
	printf("\n");


}
