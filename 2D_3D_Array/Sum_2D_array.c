//Initialise a 2D array (all possible ways) and print the sum of all element in the array row-wise

#include<stdio.h>
//#define row 3
//#define col 3
int i,j,row,col,sum=0;
void init_arr(int (*p)[col])
{
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d",&p[i][j]);
	}
}
void print_arr(int (*p)[col])
{
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%d ",p[i][j]);
		printf("\n");
	}
}
int sum_arr(int (*p)[col])
{
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			sum+=p[i][j];
	}
	return sum;
}

int main()
{
	int arr[row][col];
	printf("Enter the row & column\n");
	scanf("%d%d",&row,&col);
	printf("Enter the Array elements\n");
	init_arr(arr);
	printf("2D-Array element\n");
	print_arr(arr);
	sum = sum_arr(arr);
	printf("Sum of all array element = %d \n",sum);


}
