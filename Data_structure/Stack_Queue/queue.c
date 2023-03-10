#include<stdio.h>
#define max 3
int s[max];
int q=0,eq=0;
void queue();
void enqueue();
int main()
{
	int i;
abc:	printf("Press 1.Queue 2.Enqueue 3.Display 4.Exit \n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:queue();break;
		case 2:enqueue();break;
		case 3:display();break;
		case 4:printf("Exit\n");return 0;
		default:printf("Invalid Opertion\n");return 0;
	}
	goto abc;
}
void queue()
{
	int j;
	if(q == max)
	{
		printf("Enqueue data is over flow\n");
		return;
	}
	printf("Enter the Value\n");
	scanf("%d",&j);
	s[q++]=j;
}
void enqueue()
{
	if((eq==max)||(eq==q))
	{
		printf("Dequeue data is underflow\n");
		return;
	}
	printf("Data is dequeue = %d\n",s[eq]);
	s[eq++]=0;
}
void display()
{
	int i;
	for(i=0;i<max;i++)
		printf("%d ",s[i]);
	printf("\n");

}
