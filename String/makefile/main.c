#include"header.c"
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

