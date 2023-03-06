#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	(num-1)&num?printf("Not Power of 2\n"):printf("Power of 2\n");
}
