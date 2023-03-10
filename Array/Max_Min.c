//Write a C program to find maximum and minimum element in an array. [ use any sorting algorithm along with time complexity details ] 
#include<stdio.h>
int main()
{
	int i,j,k,num;
	printf("Enter the No.of array element\n");
	scanf("%d",&num);
	int arr[num];
	printf("Enter the array element\n");
	for(i=0;i<num;i++)
		scanf("%d",&arr[i]);
	printf("Array element = ");
	for(i=0;i<num;i++)
		printf("%d ",arr[i]);
	printf("\n");
	for(i=0;i<num;i++)
	{
		for(j=i;j<num;j++)
		{
			if(arr[i]>arr[j])
			{
				k = arr[i];
				arr[i] = arr[j];
				arr[j] = k;
			}
		}
	}
	printf("Maximum element = %d \t",arr[num-1]);
	printf("Minimum element = %d \n",arr[0]);

}
