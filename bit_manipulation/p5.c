//Find whether a number is even or odd

#include<stdio.h>

int main()
{
printf("Find whether a number is even or odd\n");
int num;
printf("Enter the number\n");
scanf("%d",&num);
num&1?printf("Given number is odd\n"):printf("Given number is even\n");
}
