#include<stdio.h>
int main()
{
	int a=0,spl=0,d=0,i,j;
	char s[20];
	printf("Enter the any string\n");
	scanf(" %[^\n]",s);
	for(i=0;s[i];i++)
	{
		if(((s[i]>=65)&&(s[i]>=92))||((s[i]>=97)&&(s[i]<=122)))
			a++;
		else if((s[i]>=48)&&(s[i]<=57))
			d++;
		else
			spl++;
	}
	printf("Number of alphabet = %d\nNumber of digits = %d\nNumber of Special = %d\n",a,d,spl);

}
