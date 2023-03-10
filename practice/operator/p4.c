//4. Write a C program to set nth bit of a number.




#include<stdio.h>
int main()
{
	int i,num,pos;
	printf("Enter the number\n");
	scanf("%d",&num);

	printf("Before Set a bit\n");
	for(i=31;i>=0;i--)
		printf("%d ",1&(num>>i));
	printf("\n");

	printf("Enter the set position\n");
	scanf("%d",&pos);

	num=num|(1<<pos);
	printf("After Set a bit\n");
	for(i=31;i>=0;i--)
		printf("%d ",1&(num>>i));
	printf("\n");


}

