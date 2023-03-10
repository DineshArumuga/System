#include<stdio.h>
int fibanassi_series(int,int,int);
int main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	fibanassi_series(0,1,num);
	printf("\n");
}
int fibanassi_series(int a,int b,int num)
{
	if(num>a)
	{
		printf("%d ",a);
		return fibanassi_series(b,a+b,num);
	}
}
