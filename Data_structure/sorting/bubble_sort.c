#include<stdio.h>
int n,swap;
void bubble_sort(int *arr)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		swap=0;
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>=arr[j+1])
			{
				temp = arr[j];
				arr[j]= arr[j+1];
				arr[j+1] = temp;
				swap=1;
			}
		}
		if(swap==0)
			break;
	}

}
int main()
{
	printf("Enter the No.of element\n");
	scanf("%d",&n);
	int arr[n],i,temp,j;
	printf("Enter the array element\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Printing the Array element\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	bubble_sort(arr);
	printf("After the sorting the array elements\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");


}
