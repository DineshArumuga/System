#include<stdio.h>
void swap(int *arr,int a,int b)
{
	int temp;
	temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}
int partion(int *arr,int lb,int ub)
{
	int i,pivot = arr[lb],start = lb,end = ub;
	while(start<end)
	{
		while(arr[start]<=pivot)
			start++;
		while(arr[end]>pivot)
			end--;
		if(start<end)
			swap(arr,start,end);

	for(i=0;i<=ub;i++)
		printf("%d ",arr[i]);
	printf("\n");
	}
	swap(arr,lb,end);
	printf("\nparition\n");
	for(i=0;i<=ub;i++)
		printf("%d ",arr[i]);
	printf("\n");

	return end;

}
void quick_sort(int *arr,int lb,int ub)
{
	int loc;
	if(lb<ub)
	{
		loc = partion(arr,lb,ub);
		quick_sort(arr,lb,loc-1);
		quick_sort(arr,loc+1,ub);
	}
}
int main()
{
	int ele,i;
	printf("Enter the Number of array element\n");
	scanf("%d",&ele);
	int arr[ele];
	printf("Enter the array element\n");
	for(i=0;i<ele;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<ele;i++)
		printf("%d ",arr[i]);
	printf("\n");
	quick_sort(arr,0,ele-1);
	for(i=0;i<ele;i++)
		printf("%d ",arr[i]);
	printf("\n");

	
}

