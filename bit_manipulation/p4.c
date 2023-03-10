//Remove the last set bit of a number
#include<stdio.h>

int main()
{
	printf("Remove the last set bit of a number\n");
	int num,i,count=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("Before removing last bit\n");
	for(i=31;i>=0;i--)
		printf("%d ",(num>>i)&1);
	printf("\n");
	for(i=31;i>=0;i--)
	{
		if((num>>i)&1)
			count++;
		if(count ==1)
		{
			num=num^(1<<i);
			break;
		}
	}
	printf("After removing last bit\n");
	for(i=31;i>=0;i--)
		printf("%d ",(num>>i)&1);
	printf("\n");
}

