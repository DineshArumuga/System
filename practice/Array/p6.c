//6. Write a C program to count total number of vowels and consonants in a string.

#include<stdio.h>
int main()
{
	int i,vowel=0,consonant=0;
	char s[20];
	printf("Enter the string\n");
	scanf("%s",s);
	for(i=0;s[i];i++)
	{
		if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
			vowel++;
		else
			consonant++;
	}
	printf("Vowel = %d\t Consonant = %d\n",vowel,consonant);

}
