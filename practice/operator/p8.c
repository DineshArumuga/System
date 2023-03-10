//8. Write a C program to get lowest set bit of a number.

#include<stdio.h>
int main()
{
	int i,j,num;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(i=0;i<=31;i++)
	{
		j=(num&(1<<i));
		if(j>=1)
			break;
	}
	printf("Lowest set bit = %d \n",i);

}
