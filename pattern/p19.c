/*


1
**
222
****
33333
******
4444444
********


*/




#include<stdio.h>
int main()
{
	int i,j,k=1;
	const int n=9;
	for(i=1;i<n;i++)
	{	
		if(i%2==0)
		{
			for(j=0;j<i;j++)
				printf("*");
		}
		else
		{
			for(j=0;j<i;j++)
				printf("%d",k);
			k++;
		}
		printf("\n");
	}
}
