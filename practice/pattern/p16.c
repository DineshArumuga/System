/*


         0
      -1 0 1
    -2-1 0 1 2
  -3-2-1 0 1 2 3
-4-3-2-1 0 1 2 3 4
  -3-2-1 0 1 2 3
    -2-1 0 1 2
      -1 0 1
         0



	 */




#include<stdio.h>
int main()
{
	unsigned int j,s,k;
	signed int i,l=0,m,c=0;
	const int n=5;
	for(i=-n+1;i<n;i++)
	{
		if(i<0)
			k=-i;
		else 
			k=i;
		for(s=0;s<k;s++)
			printf("  ");
		if(l==-5)
			l++,c++;
		if(c==0)
			m=l--;
		else 
			m=++l;
		for(j=0;j<2*(n-s)-1;j++)
		{
			if(m>=0)
				printf(" ");
			printf("%d",m++);
		}

		printf("\n");
	}
			
			
			

}
