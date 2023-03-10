#include"main.h"

void print(Sp *ptr)
{
	int i, j, k;
	for(i=0;i<4;i++,printf("\n"))
	{
		for(j=0;j<3;j++,printf("\n"))
		{
			for(k=0;k<2;k++,printf("\t"))
			{
				printf("%d",ptr->arr[i][j][k]);
			}
		}
	}
}

