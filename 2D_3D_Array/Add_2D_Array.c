//Write a program to add two 2D arrays and print the resultant array.

#include<stdio.h>
enum e{one =3,two =3};
void add_2D_array(int (*p)[one],int (*q)[one])
{
	int r[one][two],i,j;
	for(i=0;i<one;i++)
	{
		for(j=0;j<one;j++)
			r[i][j]=p[i][j]+q[i][j];
	}
	for(i=0;i<one;i++)
	{
		for(j=0;j<one;j++)
			printf("%2d " ,r[i][j]);
		printf("\n");
	}
	

}
int main()
{
	int i,j,arr1[one][two],arr2[one][two];
	printf("Enter the 1st Array element\n");
	for(i=0;i<one;i++)
	{
		for(j=0;j<one;j++)
			scanf("%d",&arr1[i][j]);
	}
	printf("Enter the 2nd Array element\n");
	for(i=0;i<one;i++)
	{
		for(j=0;j<one;j++)
			scanf("%d",&arr2[i][j]);
	}
	printf("Add two 2D arrays \n");
	add_2D_array(arr1,arr2);


}


