//count the number of set bits in a number
#include<stdio.h>

int main()
{
int num,i,count=0;
printf("Count the number of set bits in a number\n");
printf("Enter the number\n");
scanf("%d",&num);
for(i=31;i>=0;i--)
{
printf("%d ",(num>>i)&1);
if((num>>i)&1)
count++;
}
printf("\n");
printf("Count of set bits = %d\n",count);

}
