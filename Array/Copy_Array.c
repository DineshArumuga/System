//Write a C program to copy all elements from an array to another array. - char / int - any one 


#include<stdio.h>
int main()
{
	int i,j,k;
	printf("Enter the no.of array\n");
	scanf("%d",&j);
	int arr[j],arr1[j];
	printf("Enter the Array element\n");
	for(i=0;i<j;i++)
		scanf("%d",&arr[i]);
	printf("\nFirst array = ");
	for(i=0;i<j;i++)
	{
		printf("%d ",arr[i]);
		arr1[i]=arr[i];
	}
	printf("\nCopy First array elament into Second array\n");
	printf("Second array = ");
	for(i=0;i<j;i++)
		printf("%d ",arr1[i]);
	printf("\n");
}
