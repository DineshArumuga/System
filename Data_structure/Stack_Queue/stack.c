//Create a stack and push 1,2,3 and once print after even push and pop

#include<stdio.h>
#include<stdlib.h>
#define max 3
typedef struct stack
{
	int data;
	struct stack *next;
}ST;
int size=0;
void push(ST **);
void pop(ST **);
void display(ST *);
int main()
{
	ST *hptr=0;
	char i;int d;
	do{
		printf("Please choice one function 1.Push 2.Pop 3.display 4.Exit\n");
		scanf("%d",&d);
		switch(d)
		{
			case 1:push(&hptr);break;
			case 2:pop(&hptr);break;
			case 3:display(hptr);break;
			case 4:printf("Exit\n");return 0;
			default:printf("Invalid Operation\n");
				return 0;
		}
	}while(1);
}
void push(ST **ptr)
{
	if(max == size)
	{
		printf("Stack is overflow\n");
		return;
	}
	ST *temp = (ST *)malloc(sizeof(ST));
	printf("Enter the Value\n");
	scanf("%d",&temp->data);
	if(*ptr == 0)
	{
		temp->next = *ptr;
		*ptr = temp;
	}
	else 
	{
		ST *last = *ptr;
		while(last->next!=0)
			last = last->next;
		temp->next = last->next;
		last->next = temp;
	}
	size++;
}
void pop(ST **ptr)
{
	if(size == 0)
	{
		printf("Stack is underflow\n");
		return;
	}
	ST *prv;
	ST *last = *ptr;
	while(last->next != 0)
	{
		prv = last;
		last= last->next;
	}
	if(*ptr == last)
		*ptr = 0;
	else
		prv->next = last->next;	
	printf("Data Popped = %d \n",last->data);
	free(last);
	size--;
}
void display(ST *ptr)
{
	while(ptr!=0)
	{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
}

