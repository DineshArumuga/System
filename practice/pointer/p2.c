// 2. Write a C program to add two numbers using pointers.


#include<stdio.h>
int main()
{
	printf("2. Write a C program to add two numbers using pointers.\n");
	int a,b;
	printf("Enter the number\n");
	scanf("%d%d",&a,&b);
	int *p,*q;
	p = &a;
	q = &b;
	printf("Add two number %d + %d = %d\n",a,b,(*p+*q));

}
