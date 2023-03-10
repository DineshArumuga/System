//Write a C program to check whether a string is palindrome or not.


#include<stdio.h>
int main()
{
	int i,j,size,k;
	printf("Enetr the no.of array element\n");
	scanf("%d",&k);
	int arr[k];
	printf("Enter the array element\n");
	for(i=0;i<k;i++)
		scanf("%d",&arr[i]);
	for(i=0,j=k-1;i<j;i++,j--)
	{
		if(arr[i]!=arr[j])
			break;
	}
	if(i>=j)
		printf("Given array is palindrome\n");
	else
		printf("Given array is not a palindrome \n");

}
