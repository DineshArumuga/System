#include<stdio.h>
void count(int *,int );
void print(int *,int );
int main()
{
	int num,i;
	printf("Enter the No.of array element\n");
	scanf("%d",&num);
	int arr[num];
	printf("Enter the array element\n");
	for(i=0;i<num;i++)
		scanf("%d",&arr[i]);
	print(arr,num);
	count(arr,num);


}
void count(int *arr,int num)
{
	int i,j,count;
	for(i=0;i<num;i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[i] == arr[j])
				break;
		}
		if(i==j)
		{
			count = 0;
			for(j=0;j<num;j++)
			{
				if(arr[i] == arr[j])
					count++;
			}
			printf("%d is presented ---> %d \n",arr[i],count);
		}

	}
}
void print(int *arr,int num)
{
	int i;
	for(i=0;i<num;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
