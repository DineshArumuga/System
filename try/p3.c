#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr1[5],arr2[5],i,j,temp;
	printf("Enter the array element \n");
	for(i=0;i<5;i++)
		scanf("%d",&arr1[i]);
	for(i=0;i<5;i++)
		scanf("%d",&arr2[i]);

	int *p=malloc(2*20);
	for(i=0;i<5;i++)
		p[i] = arr1[i];
	for(i=5,j=0;i<10;i++)
		p[i] = arr2[j++];

	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(p[i]>p[j])
			{
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}

	for(i=0;i<10;i++)
		printf("%d ",p[i]);



}
