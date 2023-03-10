//7. Write a C program to get highest set bit of a number.


#include<stdio.h>
int main()
{
	int i,j,num;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(i=31;i>=0;i--)
	{
		j=(num&(1<<i));
		if(j>=1)
			break;
	}
	printf("Highest set bit = %d \n",i);

}
