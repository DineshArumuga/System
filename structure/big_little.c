#include<stdio.h>

typedef struct format
{
	unsigned int var;

}st;
void big_endian(st);
void little_endian(st);
int main()
{
	st abc;
	int ch;
	printf("Enter the number\n");
	scanf("%x",&abc.var);
abcd:  printf("Please enter the choice :\n1.Little Endian\n2.Big Endian\n");
	scanf(" %d",&ch);
	switch(ch)
	{
		case 1: little_endian(abc);
			break;
		case 2: big_endian(abc);
			break;
		default:printf("Invalid Choice\n");
			goto abcd;
	}
}
void little_endian(st v1)
{
	int i;
	char *q=(char*)&v1.var;
	printf("Little Endian format\n");
	for(i=0;i<4;i++)
		printf("%x",*q++);
	printf("\n");

}
void big_endian(st v2)
{
	int i,j;
	char *p=(char *)&v2.var;
	p=p+3;
	printf("Big Endian format \n");
	for(i=0;i<4;i++)
		printf("%x",*p--);
	printf("\n");
	 
}



