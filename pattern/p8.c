/*

*
**
***
****
*****
 ****
  ***
   **
    *


*/
#include<stdio.h>
int main()
{
	int i,j,s,k;
	const int n=5;
	for(i=-n+1;i<n;i++)
	{
		if(i>0)
		{
			for(s=0;s<=n-j;s++)
				printf(" ");
		
		}
		if(i<0)
			k=-i;
		else
			k=i;
		for(j=0;j<n-k;j++)
			printf("*");
		printf("\n");
	}
}
