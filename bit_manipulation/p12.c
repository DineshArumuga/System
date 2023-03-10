//Find the two non-repeating elements in an array of repeating elements /unique Number 2
#include<stdio.h>
int main()
{
	printf("Find the two non-repeating elements in an array of repeating elemens/Unique number 2\n");
	int size=0,i,j,count=0,arr[]={1,2,3,4,5,6,3,4,5,6};
	size = sizeof(arr)/sizeof(arr[0]);
	printf("Size of array = %d \n",size);
	for(i=0;i<size;i++)
		printf(" %d",arr[i]);
	printf("\nNon repeated element = ");
	for(i=0;i<size;i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[i]==arr[j])
				break;
		}
		if(i==j)
		{
			count = 0;
			for(j=i;j<size;j++)
			{
				if(arr[i]==arr[j])
					count++;
			}
			if(count == 1)
				printf("%d ",arr[i]);
		}
	}
	printf("\n");
}

