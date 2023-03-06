#include<stdio.h>
int main()
{
	int a,b,temp1,temp2,i,cnt=0;
	printf("Enter the number \n");
	scanf("%d",&a);
	printf("Enter the number\n");
	scanf("%d",&b);
	for(i=31;i>=0;--i)
	{
		temp1 = (a>>i)&1;
		temp2 = (b>>i)&1;
		if(temp1!=temp2)
			cnt++;
	}
	printf("Flip Bit = %d \n",cnt);
}

