//3. Write a C program to swap two numbers using pointers.
#include<stdio.h>
int main()
{
	printf("3. Write a C program to swap two numbers using pointers.\n");
	int a,b,i;
	printf("Enter the two number\n");
	scanf("%d%d",&a,&b);
	printf("Before swapping A = %d B = %d \n",a,b);
	int *p=&a,*q=&b;
	i=*p;*p=*q;*q=i;
	printf("After swapping A = %d B = %d \n",a,b);


}
