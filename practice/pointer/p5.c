//5. Write a C program to copy one array to another using pointers.

#include<stdio.h>
#define n 5
int main()
{
	printf("5. Write a C program to copy one array to another using pointers.\n");
	int arr[n],arr1[n],*p,i;
	printf("Enter the Array element\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	p=arr;
	printf("Printing the another array elements\n");
	for(i=0;i<n;i++)
		printf("%d ",arr1[i]=p[i]);
	printf("\n");
}
