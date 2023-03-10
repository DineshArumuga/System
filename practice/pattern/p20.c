/*


     A
    bb
   CCC
  dddd
 EEEEE



*/




#include<stdio.h>
int main()
{
	int i,j,s;
	char ch='a';
	const int n=6;
	for(i=1;i<n;i++)
	{
		for(s=0;s<n-i;s++)
			printf(" ");
		for(j=0,ch=ch^32;j<i;j++)
			printf("%c",ch);
		printf("\n");
		ch++;
	}

}
