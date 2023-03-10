#include<stdio.h>
//#define row 3
//#define col 3

int i,j,k,row,col;
void init_arr(int (*p)[row][col], int);
void print_arr(int (*p)[row][col],int);
int sum_arr(int (*p)[row][col],int);
int main()
{
	int i,j,k,arr;
	printf("Enter the No.of 2D Array\n");
	scanf("%d",&arr);
	printf("Enter the row &column\n");
	scanf("%d%d",&row,&col);
	int arr1[arr][row][col],sum =0 ;
	printf("Enter the array element\n");
	init_arr(arr1,arr);
	printf("3D Array element \n");
	print_arr(arr1,arr);
	sum=sum_arr(arr1,arr);
	printf("Sum of all 3D array elements = %d\n",sum);

}
void init_arr(int (*p)[row][col],int arr)
{
	for(i=0;i<arr;i++)
	{
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
				scanf("%d",&p[i][j][k]);
		}
	}
	
}
void print_arr(int (*p)[row][col],int arr)
{	
	for(i=0;i<arr;i++)
	{
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
				printf("%d ",p[i][j][k]);
			printf("\n");
		}
	}
}
int sum_arr(int (*p)[row][col],int arr)
{
	int sum=0;
	for(i=0;i<arr;i++)
	{
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
				sum+=p[i][j][k];
		}
	}
	return sum;
}
