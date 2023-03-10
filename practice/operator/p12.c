//Write a C program to count total zeros and ones in a binary number.

#include<stdio.h>
int main()
{
	int num,i,j,one=0,zero=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("Binary of %d = ",num);
	for(i=31;i>=0;i--)
		printf("%d ",(num>>i)&1);
	printf("\n");
	for(i=0;i<=31;i++)
	{
		j=((num>>i)&1);
		if(j==1)
			one++;
		else
			zero++;
	}
	printf("Count Zeros  = %d\nCount ones = %d\n",zero,one);
}

