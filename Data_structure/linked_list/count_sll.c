//program to count number of nodes in Singly Linked List

#include<stdio.h>
#include<stdlib.h>
typedef struct data
{
	int data;
	struct data *next;
}SD;
void count(SD *p)
{
	int i=0;
	while(p!=0)
	{
		i++;
		p=p->next;
	}
	printf("Count No.of nodes = %d\n",i);
}
void init_data(SD **p)
{
	SD *temp = malloc(sizeof(SD));
	printf("Enter the Data\n");
	scanf("%d",&temp->data);
	if(*p==0)
	{
		temp->next = *p;
		*p = temp;
	}
	else
	{
		SD *last = *p;
		while(last->next!=0)
			last = last->next;
		temp->next = last->next;
		last->next = temp;
		
	}
}
void print(SD *p)
{
	int i=0;
	while(p!=0)
	{
		printf("Data Record \t %d data = %d\n",++i,p->data);
		p = p->next;
	}
}
int main()
{
	SD *hptr=0;
	char ch;
	do{
	init_data(&hptr);
	printf("If U want again add data press Y/N\n");
	scanf(" %c",&ch);
	}while((ch == 'Y')||(ch == 'y'));
	print(hptr);
	count(hptr);
}
		
