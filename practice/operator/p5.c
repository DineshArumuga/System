//5. Write a C program to clear nth bit of a number.


#include<stdio.h>
int main()
{
	int i,num,pos;
	printf("Enter the number \n");
	scanf("%d",&num);
	printf("Before clear a bit \n");

	for(i=31;i>=0;i--)
		printf("%d ",1&(num>>i));
	printf("\n");

	printf("Enter the clear bit position \n");
	scanf("%d",&pos);
	num=num&~(1<<pos);
	for(i=31;i>=0;i--)
		printf("%d ",1&(num>>i));
	printf("\n");

}

