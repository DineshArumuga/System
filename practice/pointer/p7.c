//7. Write a C program to reverse an array using pointers.

#include<stdio.h>
enum e { n = 5 };
int main()
{
	printf("7. Write a C program to reverse an array using pointers.\n");
	int i,j,*p,arr[n],temp;
	printf("Enter the Array element\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Array elemnet = ");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	p = arr;
	for(i=0,j=n-1;i<=j;i++,j--)
	{
		temp = p[j];
		p[j] = arr[i];
		arr[i] = temp;
	}
	printf("Reverse Array elemnet = ");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");




}
