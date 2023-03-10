//9. Write a C program to count leading zeros in a binary number.
#include<stdio.h>
int main()
{
	int num,i,j;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("Binary of %d = ",num);
	for(i=31;i>=0;i--)
		printf("%d ",(num>>i)&1);
		printf("\n");
	for(i=31;i>=0;i--)
	{
		j=(1&(num>>i));
		if(j==1)
			break;
	}
	printf("%d leading zero bit\n",i);
}
