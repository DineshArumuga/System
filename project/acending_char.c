#include"main.h"

typedef struct n
{
	char a ;
	struct n *next;
}sll;

void create(sll **);
void sort(sll *);
void display(sll *);

void acending()
{
	printf("\nNumber is odd :\n");
	sll *head=0;

	create(&head);

	sort(head);
	display(head);
}


void create(sll **ptr)
{
	sll *new;
	int i;
	for(i=0;i<5;i++)
	{
		new=malloc(sizeof(sll));
		printf("\n enter the char : \n");
		scanf(" %c",&new->a);
		if((new->a <= 90 && new->a >=65) || (new->a <=122 && new->a >=97))
		{		
			new->next=*ptr;
			*ptr=new;
		}
		else
		{
			printf("Invalid input\n");
			i--;
		}
	}
}


void sort(sll *ptr)
{
	sll t ,*b ;
	int i,j;
	
	for(i=0;i<5;i++)
	{
		b=ptr->next;
		for(j=i+1;j<5;j++)
		{
			if((ptr->a)>(b->a))
			{
				(t.a)=(ptr->a);
				(ptr->a)=(b->a);
				(b->a)=(t.a);
			}
			b=b->next;
		}
		ptr=ptr->next;
	}                                    


}

void display (sll *ptr)
{
	while(ptr!=0)
	{
		printf(" %c ",ptr->a);
		ptr=ptr->next;
	}
}
