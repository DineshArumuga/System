//Write a C program to count total number of vowels and consonants in a string.
#include<stdio.h>
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
int main()
{
	int i,j;
	char s[20];
	printf("Enter the string \n");
	scanf("%s",s);
	i=count_vowels(s);
	printf("No.of number of vowels = %d\n",i);
	j=count_consonants(s);
	printf("No.of number of consonants = %d\n",j);
}
