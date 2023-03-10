#include<stdio.h>
int i,j,k,row,col;
void init_arr(int (*p)[col]);
void print_arr(int (*p)[col]);
void delete_arr(int (*p)[col]);
int main()
{
	printf("Enter the row &column\n");
	scanf("%d%d",&row,&col);
	int arr1[row][col];
	printf("Enter the array element\n");
	init_arr(arr1);
	printf("2D Array element \n");
	print_arr(arr1);
	delete_arr(arr1);


}
void init_arr(int (*p)[col])
{
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
				scanf("%d",&p[j][k]);
		}
}
void print_arr(int (*p)[col])
{	
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
				printf("%5d ",p[j][k]);
			printf("\n");
		}
}
void delete_arr(int (*p)[col])
{
	int r,c;
	printf("Enter the Row and Column delete position\n");
	scanf("%d%d",&r,&c);
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
			{
				if((j==r)&&(k==c))
				{
					for(k=c;k<col;k++)
						p[j][k]=p[j][k+1];
					p[j][k-1]=0;
				}

			}
				
		}
	printf("After Delete Array element\n");
	print_arr(p);
}
