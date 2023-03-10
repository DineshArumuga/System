//6. Write a C program to swap two arrays using pointers.

#include<stdio.h>
#define n 5
int main()
{
	printf("6. Write a C program to swap two arrays using pointers.\n");
	int arr[n],arr1[n],*p,*q,i,temp;
	printf("Enter first and second array element\n");
	for(i=0;i<n;i++)
		scanf("%d%d",&arr[i],&arr1[i]);
	printf("Before swapping\n1st Array element = ");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n2nd Array element = ");
	for(i=0;i<n;i++)
		printf("%d ",arr1[i]);
	printf("\n");	

	p=arr;
	q=arr1;
	for(i=0;i<n;i++)
	{
		temp = p[i];
		p[i] = q[i];
		q[i] = temp;
	}
	printf("After swapping\n1st Array element = ");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n2nd Array element = ");
	for(i=0;i<n;i++)
		printf("%d ",arr1[i]);
	printf("\n");

}
