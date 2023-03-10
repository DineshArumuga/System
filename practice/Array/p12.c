#include<stdio.h>
#include<stdlib.h>
void print_arr(int *);
void delete_arr(int *);
int n=0;
int main()
{
	printf("Enter the No.of array element\n");
	scanf("%d",&n);
	int arr[n],i;
	printf("Enter the array element\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	print_arr(arr);
	delete_arr(arr);
	print_arr(arr);
}
void delete_arr(int *p)
{
	printf("Duplicate element is deleted\n");
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i]==p[j])
			{
				for(k=j;k<n;k++)
					p[k]=p[k+1];
				p[n-1]=0;
			}
		}
	}

}
void print_arr(int *p)
{
	int i;
	printf("Printing th array element\n");
	for(i=0;i<n;i++)
		printf("%d ",p[i]);
	printf("\n");
}
