/*


  * * * * * * * * * 
    * * * * * * * 
      * * * * * 
        * * * 
          * 



*/
#include<stdio.h>
int main()
{
	int i,j,s,k;
	const int n = 5;
	k=n;
	for(i=0;i<n;i++)
	{
		for(s=0;s<=i;s++)
			printf("  ");
		k--;
		for(j=0;j<n+k-i;j++)
			printf("* ");
		printf("\n");
	}
}
