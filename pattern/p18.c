/*
 


1
33
555
7777
99999
8888
666
44
2




*/

#include<stdio.h>
int main()
{
	int i,j,k,m=1,c=0;
	const int n=5;
	for(i=1-n;i<n;i++)
	{
		if(i<0)
			k=-i;
		else
			k=i;

		for(j=0;j<n-k;j++)
			printf("%d",m);
		if(m>=9)
			c++,m++;
		if(c==1)

			m--,m--;
		else
			m++,m++;

		printf("\n");
	}
}
