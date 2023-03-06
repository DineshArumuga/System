#include<stdio.h>
int row,col;
void init_arr(int p[][col]);
void print(int p[][col]);
void transposing_arr(int p[][col]);

int main()
{
	int i,j;
	printf("Enter the Row and column\n");
	scanf("%d%d",&row,&col);
	int arr[row][col];
	printf("Enter the array element\n");
	init_arr(arr);//Initialization of 2D-array element
	print(arr);//Printing 2D array element
	transposing_arr(arr);//Transposing row and column for 2D array 
	print(arr);//Printing 2D array element
}

void init_arr(int p[row][col])
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d",&p[i][j]);//Getting the input from user 
	}
}

void print(int p[row][col])
{
	int i,j;
	printf("Print 2D array element\n");
	for(i=0;i<row;i++,printf("\n"))
	{
		for(j=0;j<col;j++,printf("\t"))
			printf("%d ",p[i][j]);//Printing the 2D array element
	}
}

void transposing_arr(int p[row][col])
{
	int i,j,a[row][col];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			a[i][j] = p[i][j];//Copy one array into another array
	}
	printf("After transposing array \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			p[i][j] = a[j][i];//**** Transposing logic ****
	}
}

