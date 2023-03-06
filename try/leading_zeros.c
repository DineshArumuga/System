#include<stdio.h>
int main()
{
	int num,i,b,cnt=0;
	printf("Enter the Number\n");
	scanf("%d",&num);
	for(i=31;i>=0;i--)
	{
		b = (num>>i)&1;
		if(b==0)
			cnt++;
		else
			break;
	}
	printf("%d \n",cnt);
}
