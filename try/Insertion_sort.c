#include<stdio.h>
void inserted_sort(int *arr,int ele)
{
	int i,j,temp;
	for(i=0;i<ele-1;i++)
	{
		temp = arr[i+1];
		for(j=i;j>=0;j--)
		{
			if(arr[j]>temp)
				arr[j+1]=arr[j];
			else
				break;
		}
		arr[j+1]=temp;
	}
}
int main()
{
	int ele,i;
	printf("Enter the array element\n");
	scanf("%d",&ele);
	int arr[ele];
	for(i=0;i<ele;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<ele;i++)
		printf("%d ",arr[i]);
	printf("\n");
	inserted_sort(arr,ele);
	for(i=0;i<ele;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

