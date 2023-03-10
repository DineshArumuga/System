//Write a C program to count frequency of each element in an array.


#include<stdio.h>
int main()
{
	int i,j,num,count;
	printf("Enter the No.of array element \n");
	scanf("%d",&num);
	int arr[num];
	printf("Enter the array element\n");
	for(i=0;i<num;i++)
		scanf("%d",&arr[i]);
	printf("Array Element = ");
	for(i=0;i<num;i++)
		printf("%d ",arr[i]);
	printf("\n");
	for(i=0;i<num;i++)
	{
		count=0;
		for(j=0;j<num;j++)
		{
			if(arr[i]==arr[j])
				break;
		}
		if(i==j)
		{
			for(j=0;j<num;j++)
				if(arr[i]==arr[j])
					count++;
			printf("%d ----> %d\n",arr[i],count);
		}
	}
}


