#include<stdio.h>
//#define row 3
//#define col 3

int i,j,k,row,col,arr;
void init_arr(int (*p)[row][col]);
void print_arr(int (*p)[row][col]);
void add_arr(int (*p)[row][col],int (*q)[row][col]);
int main()
{
	
	printf("Enter the No.of 2D Array\n");
	scanf("%d",&arr);
	printf("Enter the row &column\n");
	scanf("%d%d",&row,&col);
	int arr1[arr][row][col],arr2[arr][row][col];
	printf("Enter the Array element\n");
	init_arr(arr1);
	printf("Enter the 2nd Array element\n");
	init_arr(arr2);
	printf("3D 1st Array element \n");
	print_arr(arr1);
	printf("3D 2nd Array element \n");
	print_arr(arr2);
	add_arr(arr1,arr2);

}
void init_arr(int (*p)[row][col])
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
void print_arr(int (*p)[row][col])
{	
	for(i=0;i<arr;i++)
	{
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
				printf("%d ",p[i][j][k]);
			printf("\n");
		}
		printf("\n");
	}
}
void add_arr(int (*p)[row][col],int (*q)[row][col])
{
	int z[arr][row][col];
	for(i=0;i<arr;i++)
	{
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
				z[i][j][k]=p[i][j][k]+q[i][j][k];
		}
	}
	printf("Add 3D Array Element\n");
	print_arr(z);
}
