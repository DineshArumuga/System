#include<stdio.h>
int swap(int num);
void print(int num);
int main()
{
	int num;
	printf("Enter the number \n");
	scanf("%d",&num);
	printf("Before swapping nipple\n");
	print(num);
	printf("After the Swapping nipple\n");
	num=swap(num);
	print(num);

}
int swap(int num)
{
	return (num<<4)|(num >>4);
}
void print(int num)
{
	int i;
	for(i=7;i>=0;i--)
	{
		printf("%d ",1&(num>>i));
		if(i==4)
			printf("  ");
	}
	printf("\n");
}
