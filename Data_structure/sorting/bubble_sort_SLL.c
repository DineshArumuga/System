#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct data
{
	int data;
	struct data *next;
}SD;
int n;
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
int count(SD *p)
{
	int i=0;
	while(p!=0)
	{
		i++;
		p = p->next;
	}
	return i;
}
void sort_linked(SD *ptr)
{
	int j,i,c=count(ptr);
	SD *p = ptr,*q,*temp; 
	for(i=0;i<n-1;i++)
	{
		q=p->next;
		for(j=0;j<n-1-i;j++)
		{
			if((p->data)>(q->data))
			{
				temp->data=p->data;
				p->data = q->data;
				q->data = temp->data;
			}
			if(q->next!=0)
				q=q->next;
		}
		p = p->next;		
	}
	
}
int main()
{
	int i;
	SD *hptr=0;
	printf("Enter the No.of Node\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		init_data(&hptr);
//	printf("Before sorting the node\n");
//	print(hptr);
	sort_linked(hptr);
	printf("After sorting the node\n");
	print(hptr);
}
	
