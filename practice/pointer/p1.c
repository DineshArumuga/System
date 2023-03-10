//1. Write a C program to create, initialize and use pointers.


#include<stdio.h>
int main()
{
	printf("1. Write a C program to create, initialize and use pointers\n");
	int a=10;
	int *ptr=&a;
	printf("ptr = %p \t *ptr = %d\n",ptr,*ptr);

}
