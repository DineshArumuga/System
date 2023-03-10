//15. Write a C program to compare two strings using pointers.
#include<stdio.h>
int str_cmp(char *,char *);
int main()
{
	printf("15. Write a C program to compare two strings using pointers.\n");
	char s[20],d[20];
	int i;
	printf("Enter the Any two strings\n");
	scanf("%s%s"s,d);
	i=str_cmp(s,d);
	if(i==0)
		printf("Both string are same\n");
	else if(i<0)
		printf("S1 is greater than S2\n");
	else
		printf("S1 is lesser than S2\n");
}
int str_cmp(char *p,char *q)
{
	int i;
	for(i=0;p[i

}
