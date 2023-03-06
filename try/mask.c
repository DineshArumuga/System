#include<stdio.h>
int main()
{
	int num,i,pos1,pos2;
	printf("Enter the Number\n");
	scanf("%d",&num);
	printf("Enter the position 1\n");
	scanf("%d",&pos1);
	printf("Enter the position 2\n");
	scanf("%d",&pos2);
	num = num >> pos1;
	for(i=31;i>=pos2;i--)
		num = num&~(1<<i);
	printf("%d\n",num);


}
