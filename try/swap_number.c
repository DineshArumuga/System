//use array of fn ptrs pointing to 2 fns , Swap_1 fn using pointer operation , swap_2 fn using xor operation
#include<stdio.h>
void swap_1(int,int);
void swap_2(int,int);
int main()
{
	void (*fp[2])(int,int)={swap_1,swap_2};
	int num1,num2;
	printf("Enter the number1 and number2\n");
	scanf("%d%d",&num1,&num2);
	fp[0](num1,num2);
	fp[1](num1,num2);
}
void swap_1(int num1,int num2)
{
	int *p1 = &num1,*p2 = &num2,temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	printf("Function 1 -- %d  %d\n",num1,num2);
}
void swap_2(int num1,int num2)
{
	num1^=num2^=num1^=num2;
	printf("Function 2 -- %d  %d\n",num1,num2);
}
