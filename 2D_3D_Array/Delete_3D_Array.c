#include<stdio.h>
int i,j,k,row,col,arr;
void init_arr(int (*p)[row][col]);
void print_arr(int (*p)[row][col]);
void delete_arr(int (*p)[row][col]);
int main()
{
	printf("Enter the No.of 2D Array\n");
	scanf("%d",&arr);
	printf("Enter the row &column\n");
	scanf("%d%d",&row,&col);
	int arr1[arr][row][col];
	printf("Enter the array element\n");
	init_arr(arr1);
	printf("3D Array element \n");
	print_arr(arr1);
	delete_arr(arr1);


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
				printf("%5d ",p[i][j][k]);
			printf("\n");
		}
	}
}
void delete_arr(int (*p)[row][col])
{
	int a,r,c;
	printf("Enter Array,Row,Column delete\n");
	scanf("%d%d%d",&a,&r,&c);
	for(i=0;i<arr;i++)
	{
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
			{
				if((i==a)&&(j==r)&&(k==c))
				{
					for(k=c;k<col;k++)
						p[i][j][k]=p[i][j][k+1];
					p[i][j][k-1]=0;
				}

			}
				
		}
	}
	printf("After Delete Array element\n");
	print_arr(p);
}
