#include<stdio.h>
int main()
{
	int a,b,i,cnt=0;
	printf("Enter the number\n");
	scanf("%d",&a);
	for(i=0;i<=31;i++)
	{
		b = (a>>i)&1;
		if(b==0)
			cnt++;
		else
			break;
	}
	printf("%d\n",cnt++);

}
