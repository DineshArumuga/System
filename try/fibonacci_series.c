#include<stdio.h>
void fibonacci_series(int a,int b,int c);
void (*fp)(int,int,int) = fibonacci_series;
int num;
int main()
{
	printf("Enter the any Number\n");
	scanf("%d",&num);
	printf("Fibonacci_series : ");
	fp(0,1,1);
	printf("\n");
}
void fibonacci_series(int a,int b,int c)
{
	if(a<num)
	{
		printf("%d ",a);
//		c = a+b;
//		a=b;
//		b=c;
		fp(b,c,b+c);
	}
}
