//check if the number is a power of 2

#include<stdio.h>

int main()
{
int num;
printf("Check if the number is a power of 2\n");
scanf("%d",&num);
(num-1)&num?printf("Given number is not a power of 2\n"):printf("Given number is power of 2\n");
}
