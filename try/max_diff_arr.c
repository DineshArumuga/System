#include<stdio.h>
int Max_arr(int *,int );
void print(int *,int );
int main()
{
	int i,n,result;
	printf("Enter the Number of array element\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the Array Number \n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	print(arr,n);
	result = Max_arr(arr,n);
	printf("Result = %d\n",result);
}
int Max_arr(int*p,int n)
{
	int max=0,i,j;
	for(i=0;i<n-1;i++)
	{
		j = p[i]-p[i+1];
		if(max<j)
			max = j;
	}
	return max;

}
/*
int Max_arr(int *p,int n)
{
	int max,min,i;
	min = max = p[0];
	for(i=1;i<n;i++)
	{
		if(min>p[i])
			min = p[i];
		if(max<p[i])
			max = p[i];
	}
	printf("Maximum ---> %d  Minimum ---> %d \n",max,min);
	return max-min;
}*/

void print(int *p,int n)
{
	int i;
	printf("Printing Array element\n");
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	printf("\n");
}
