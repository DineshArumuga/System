/*


* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 



*/



#include<stdio.h>
int main()
{
	int i,j,s,k;
	const int n=5;
	for(i=-n+1;i<n;i++)
	{
		if(i<0)
			k=-i;
		else 
			k=i;
		for(s=0;s<n-k-1;s++)
			printf("  ");
		for(j=0;j<n+k-s;j++)
			printf("* ");
		printf("\n");
	}
}
