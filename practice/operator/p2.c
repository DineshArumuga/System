//Write a C program to check Most Significant Bit (MSB) of a number is set or not.

#include<stdio.h>
#define float int
typedef float integar;
int main()
{
	enum num{one=1};
	integar num;
	printf("Enter the Number \n");
	scanf("%d",&num);
	num&(one<<31)?puts("MSB is set\n"):puts("MSB is clear\n");
}
