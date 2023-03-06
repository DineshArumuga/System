//Declare a struct with 10 char elements and an interger variable compare 2 variables of the  struct , which on heap 
//If they are same : 
//          Write program to reverse the last 5 characters in a string - use fn ptr 
//If they are not equal :
//          Write program to swap first 4 bits with last 4 bits in a character variable


#include<stdio.h>
#include<string.h>
typedef struct mock
{
	char s[10];
	int var;
}SM;
void swap(void);
void string(void);
void print(SM p);
void init(SM *p);

int main()
{
	int count = 0,i;
	SM first,second;
	init(&first);
	init(&second);
	print(first);
	print(second);
	void (*fp)(void) = string;
	for(i=0;i<10;i++)
	{
		if(first.s[i] != second.s[i])	
			count++;
	}
	if(first.var != second.var)
		count++;
	if(count == 0)
		fp();
	else
		swap();
	
}

void swap(void)
{
	int num,i,j,temp,a,b;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(i=7;i>=0;i--)
		printf("%d ",1&(num>>i));
	printf("\n");
	for(i=0,j=7;j>i;i++,j--)
	{
		a = 1&(num>>i);
		b = 1&(num>>j);
		if(a!=b)
		{
			num = num ^ (1<<i);
			num = num ^ (1<<j);
		}
	}
	printf("After Swapping nibble\n");
	for(i=7;i>=0;i--)
		printf("%d ",1&(num>>i));
	printf("\n");
}
void string(void)
{
	int i,j,len;
	char s[20],temp;
	printf("Enter the string\n");
	scanf("%s",s);
	printf("Before reverse the string = %s\n",s);
	len=strlen(s);
	for(i=len-5,j=len-1;i<j;i++,j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
	printf("After reverse the string = %s \n",s);

}
void print(SM p)
{
	int i;
	printf("Array of char = ");
	for(i=0;i<10;i++)
		printf("%d ",p.s[i]);
	printf("\nVariable = %d\n",p.var);
}
void init(SM *p)
{
	int i;
	printf("Enter the 10 character\n");
	for(i=0;i<10;i++)
		scanf(" %c",&(p->s[i]));
	printf("Enter the any number\n");
	scanf("%d",&p->var);
}















































