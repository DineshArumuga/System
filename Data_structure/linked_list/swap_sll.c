//C program to swap two nodes in a singly linked list

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct swap
{
	int data;
	struct swap *next;
}SS;
void add_node(SS **);
void print(SS *);
void swap(SS *);
int count(SS *);
int main()
{
	SS *hptr = 0;
	add_node(&hptr);
	add_node(&hptr);
	printf("Before Swapping the data\n");
	print(hptr);
	swap(hptr);
	printf("After Swapping the data\n");
	print(hptr);
}
void add_node(SS **ptr)
{
	SS *init = (SS *) malloc(sizeof(SS));
	printf("Enter the any data\n");
	scanf("%d",&init->data);
	if(*ptr == 0)
	{
		init->next = *ptr;
		*ptr = init;
	}
	else
	{
		SS *last = *ptr;
		while(last->next!=0)
			last = last->next;
		init->next = last->next;
		last->next = init;
	}
}
void print(SS *p)
{
	int i=0;
	while(p!=0)
	{
		printf("Data Record \t %d data = %d\n",++i,p->data);
		p = p->next;
	}
}
int count(SS *p)
{
	int i=0;
	while(p!=0)
	{
		i++;
		p=p->next;
	}
	return i;	
}
void swap(SS *ptr)
{
	int i,j,c=count(ptr);
	SS **p = (SS**)malloc(c*sizeof(SS*));
	SS temp;
	for(i=0;i<c;i++)
	{
		p[i]=ptr;
		ptr = ptr->next;
	}
	int size = sizeof(SS)-sizeof(SS *);
	for(i=0,j=c-1;i<c/2;i++,j--)
	{
		memcpy(&temp,p[i],size);
		memcpy(p[i],p[j],size);
		memcpy(p[j],&temp,size);
	}
}                                                                                                                                                                                                              
