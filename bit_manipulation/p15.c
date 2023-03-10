//Invert Alphabet's case
#include<stdio.h>

int main()
{
printf("Invert Alphabet\n");
char s[20];
printf("Enter the any string\n");
scanf("%s",s);
int i;
for(i=0;s[i];i++)
{
s[i]=s[i]^32;
}
printf("After invert the string = %s\n",s);
}

