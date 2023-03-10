#include<stdio.h>
int my_strcmp(char *,char *);
int main()
{
	char s1[20],s2[20];
	printf("Enter the strings\n");
	scanf("%s%s",s1,s2);

	int r = my_strcmp(s1,s2);

	if(r == 0)
		printf("strings are equal\n");
	else if(r > 0)
		printf("s1 is greater, s2 is smaller\n");
	else 	
		printf("s1 is smaller, s2 is greater\n");
}
int my_strcmp(char *p,char *q)
{
	int i;
	for(i=0;(p[i]!='\0')&&(p[i]==q[i]);i++);

	return p[i]-q[i];
}



