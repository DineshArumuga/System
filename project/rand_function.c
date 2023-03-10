#include"main.h"


void rand_function(Sp **ptr)
{
	int i, j ,k;
	srand(getpid());
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<2;k++)
			{
				(*ptr)->arr[i][j][k]=rand()%1000+1;
			}
		}
	}
}

