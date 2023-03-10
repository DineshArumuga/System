//Create a list with 3 nodes having int data in single Linked list data : 100,200,300

#include<stdio.h>
#include<stdlib.h>
typedef struct data
{
	int data;
	struct data *next;
}SD;
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
	init_data(&hptr);
	init_data(&hptr);
	init_data(&hptr);
	print(hptr);
}
		
