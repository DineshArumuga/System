#include<stdio.h>
#include<stdlib.h>
#define max 5
typedef struct queue
{
	int data;
	struct queue *next;
}SQ;
void display(SQ *);
void enqueue(SQ **);
void dequeue(SQ **);
int eq=0,dq=0;
int main()
{
	int i;
	SQ *hptr=0;
go:	printf("Please choice 1.Enqueue 2.Dequeue 3.Dislay 4.Exit \n");
	scanf("%d",&i);
	switch(i)
	{
		case 1: enqueue(&hptr);
			break;
		case 2: dequeue(&hptr);
			break;
		case 3: display(hptr);
			break;
		case 4: return 0;
		default:printf("Enter the Correct option\n");
			goto go;
	}
	goto go;
}
void enqueue(SQ **ptr)
{
	if(eq == max)
	{
		printf("Enqueue data is overflow\n");
		return;
	}
	SQ *temp = (SQ *)malloc(sizeof(SQ));
	printf("Enter the any data\n");
	scanf("%d",&temp->data);
	if(*ptr==0)
	{
		temp->next = *ptr;
		*ptr = temp;
	}
	else
	{
		SQ *last = *ptr;
		while(last->next!=0)
			last = last->next;
		temp->next = last->next;
		last->next = temp;
	}
	eq++;
}
void dequeue(SQ **ptr)
{
	if((dq == max)||(dq == eq))
	{
		printf("Dequeue data is overflow\n");
		return ;
	}
	SQ *last = *ptr;
	*ptr = last->next;
	printf("Dequeue data = %d\n",last->data);
	free(last);
	dq++;
}
void display(SQ *ptr)
{
	printf("Data \t");
	while(ptr!=0)
	{
		printf(" %d",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
