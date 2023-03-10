//Remove alternate nodes in single linked list

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
void delete(SD **p,int n)
{
	int i=0;
	SD *temp = *p,*prv;
	while(temp!=0)
	{
		if(i==n)
		{
			if(*p==temp)
				*p = temp->next;
			else
				prv->next = temp->next;
			free(temp);
			temp = NULL;
			return;
		}
		else
		{
			prv = temp;
			temp = temp->next;
		}
		i++;
	}
}
int main()
{
	SD *hptr=0;
	int i,n;
	printf("Enter the No.of node\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		init_data(&hptr);
	print(hptr);
	for(i=0;i<n;i++)
	{
		if(i%2==1)
			delete(&hptr,i);
	}
	printf("Deleted alternate node\n");
	print(hptr);
}
		
