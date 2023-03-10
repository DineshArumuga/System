//5. Write a C program to find total number of alphabets, digits or special character in a string.
#include<stdio.h>
int main()
{
	int Alphabet=0,digit=0,character=0,i,j;
	char s[100];
	printf("Enter the Any string\n");
	scanf("%s",s);
	for(i=0;s[i];i++)
	{
		if(((s[i]>=65)&&(s[i]<=92))||((s[i]>=97)&&(s[i]<=122)))
			Alphabet++;
		else if((s[i]>=48)&&(s[i]<=57))
			digit++;
		else
			character++;
	}
	printf("Alphabets =%d ,Digits = %d ,Special character = %d\n",Alphabet,digit,character);
}
