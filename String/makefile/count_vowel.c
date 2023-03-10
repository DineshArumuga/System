#include"header.c"
int count_vowels(char *p)
{
	int i,count=0;
	for(i=0;p[i];i++)
	{
		if((p[i]=='a')||(p[i]=='e')||(p[i]=='i')||(p[i]=='o')||(p[i]=='u'))
			count++;
	}
	return count;
}
