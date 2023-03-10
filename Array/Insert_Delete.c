//Write a C program to insert and delete  an element in an array at specified position - write fns  insert(n) , delete(n), get(n) where  n is specfied position taken from user



#include<stdio.h>

void insert(int *);
void delete(int *);
void print(int *);
static int j,k;

int main()
{
	int i,num;
	printf("Enter the no.of array \n");
	scanf("%d",&j);
	int arr[j];
	printf("Enter the array element\n");
	for(i=0;i<j;i++)
		scanf("%d",&arr[i]);
abc:	printf("Enter the 1) Insert array 2) Delete array 3)Get array 4)stop\n");
        scanf("%d",&num);
	switch(num)
	{
		case 1 : insert(arr);
			 break;
		case 2 : delete(arr);
			 break;
		case 3 : print(arr);
			 break;
		case 4 : return 0;
		default: printf("Invalid opeartion\n");
			 return 0;
	}
	goto abc;
}

void insert(int *p)
{
	int i,num,pos;
	printf("Enter the insert element \n");
	scanf("%d",&num);
	printf("Enter the position\n");
	scanf("%d",&pos);
	for(i=j-1;i>=pos-1;i--)
		p[i+1]=p[i];
	p[pos-1]=num;
}

void delete(int *p)
{
	int i,pos;
	printf("Enter the position\n");
	scanf("%d",&pos);
	for(i=pos-1;i<j;i++)
		p[i]=p[i+1];
}

void print(int *p)
{
	int i,pos;
	for(i=0;i<j;i++)
		printf("%d ",p[i]);
	printf("\n");
}



