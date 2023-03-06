#include<stdio.h>
void arr_duplicate(int *);
int main()
{
	int arr[10]={1,2,3,1,4,5,6,7,4,8};
	void (*fp)(int *) = arr_duplicate;
	fp(arr);
}
void arr_duplicate(int *arr)
{
	int i,j,k,count,cnt=0,arr1[10];
	for(i=0;i<10;i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[i]==arr[j])
				break;
		}
		/*
		if(i==j)
		{
			count = 0;
			for(k=i;k<10;k++)
			{
				if(arr[i]==arr[k])
					count++;
			}
			printf("%d ---> %d\n",arr[i],count);
		}
		*/
		if(i!=j)
		{
			arr1[cnt++] = arr[i];
		}
	}
	printf("Repeated element =");
	for(i=0;i<cnt;i++)
		printf(" %d",arr1[i]);
	printf("\n");
}
