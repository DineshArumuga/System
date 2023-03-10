#include<stdio.h>
int *insertion_sort(int *arr,int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp = arr[i];
		j=i-1;
		while(j>=0&&arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	return arr;
}
int main()
{
	int n;
	int* (*fp)(int *,int) = insertion_sort;
	printf("Enter the No.of array\n");
	scanf("%d",&n);

	int arr[n],i,j,temp;
	printf("Enter the array element\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	printf("Printing array element\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	
	int *a = fp(arr,n);

	printf("\nAfter the sorting elements are\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
