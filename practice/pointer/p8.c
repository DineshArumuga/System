//8. Write a C program to search an element in array using pointers.

#include<stdio.h>
#define n 5
int main()
{
	printf("8. Write a C program to search an element in array using pointers.\n");
	int i,*p,a,arr[n];
	printf("Enter the Array element\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter the searching element\n");
	scanf("%d",&a);
	p = &a;
	for(i=0;i<n;i++)
	{
		if(arr[i] == *p)
		{
			printf("Searching element is present = %d \n",*p);
			return 0;
		}
	}
	printf("Searching element is not present \n");
}
