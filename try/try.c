#include<stdio.h>
int main()
{
	int i,a[10]={1,2,3,4,5,6,7,8,9,10},Even = 0,Odd = 0;
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
			Even++;
		else 
			Odd++;
	}
	printf("Even Count = %d\nOdd Count = %d\n",Even,Odd);
}
