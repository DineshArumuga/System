//Toggle ith Bit of a number
#include<stdio.h>

int main()
{
int num,i;
printf("Toggle ith bit of a number\n");
printf("Enter the number\n");
scanf("%d",&num);
for(i=31;i>=0;i--)
printf("%d ",(num>>i)&1);
printf("\n");
printf("Enter the toggle bit position\n");
scanf("%d",&i);
num = num^(1<<i);
for(i=31;i>=0;i--)
printf("%d ",(num>>i)&1);
printf("\n");
}
