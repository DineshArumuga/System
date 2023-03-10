//Write a C program to get nth bit of a number

#include<stdio.h>
typedef unsigned int ui;
typedef signed int si;
int main()
{
	ui pos;
       	si num,i;	
	printf("Enter the number\n");
	scanf("%d",&num);
	
	printf("Binary Number\n");
	for(i=31;i>=0;--i)
		printf("%d ",1&(num>>i));
	printf("\n");
	
abc:	printf("Enter the bit position \n");
	scanf("%d",&pos);
	if((pos>=0)&&(pos<=31))
		printf("get a bit = %d \n",1&(num>>pos));
	else
	{
		printf("Invalid bit postion \n");
		goto abc;
	}
	
}
