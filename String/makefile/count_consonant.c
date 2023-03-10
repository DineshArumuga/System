#include"header.c"
int count_consonants(char *p)
{
	int i,count1=0;
	for(i=0;p[i];i++)
	{
		if((p[i]!='a')&&(p[i]!='i')&&(p[i]!='e')&&(p[i]!='u')&&(p[i]!='o'))
			count1++;
	
	}
	return count1;
}
