//Write a C program to sort an int array using pointers. [ increasing order / decreasing order ]



#include<stdio.h>
void asscending_order(int *,int);
void descending_order(int *,int);

int main()
{
	int num,i;
	printf("Enter the No of array_element\n");
	scanf("%d",&num);
	int arr[num];
	printf("Enter the %d array elemnt\n",num);
	for(i=0;i<num;i++)
		scanf("%d",&arr[i]);
abc:	printf("Press 1) Asscending order 2) Descending order\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1 : asscending_order(arr,num);
			 break;
		case 2 : descending_order(arr,num);
			 break;
		default: printf("\n\n\n\nEnter the correct option\n");
			 goto abc;
	}
}

void asscending_order(int *p,int num)
{
	int i,j,temp;
	for(i=0;i<num;i++)
	{
		for(j=i;j<num;j++)
		{
			if(p[i]>=p[j])
			{
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
	printf("\nAsscending order = ");
	for(i=0;i<num;i++)
		printf("%d ",p[i]);
	printf("\n");
}

void descending_order(int *p,int num)
{
	int i,j,temp;
	for(i=0;i<num;i++)
	{
		for(j=i;j<num;j++)
		{
			if(p[i]<=p[j])
			{
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
	printf("\nDescending order = ");
	for(i=0;i<num;i++)
		printf("%d ",p[i]);
	printf("\n");
}
