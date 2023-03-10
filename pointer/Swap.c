//Write a C program to swap two numbers using pointers.



#include<stdio.h>
void swap_fun(int *,int *);
int main()
{
	int p,q;
	printf("Enter the number \n");
	scanf("%d%d",&p,&q);
	printf("Before Swappig operation\n");
	printf("P = %d\tQ = %d\n",p,q);
	swap_fun(&p,&q);
	printf("After Swappig operation\n");
	printf("P = %d\tQ = %d\n",p,q);
	
}

void swap_fun(int *p,int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}


