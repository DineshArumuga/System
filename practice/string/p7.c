//Write a C program to count total number of words in a string.


#include<stdio.h>
int main()
{
	char s[100];int i,count=0;
	printf("Enter the Any string line\n");
	scanf("%[^\n]",s);
	printf("Strine line = %s\n",s);
	for(i=0;s[i];i++)
		if(s[i]==' ')
			count++;
	printf("No.of words = %d \n",count+1);
}
