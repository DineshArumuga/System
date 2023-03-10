#include<stdio.h>
#include<stdlib.h>
typedef struct data
{
	char data;
	struct data *next;
}SD;
void add_init(SD **);
void circular_link(SD **);
void print(SD *);
int main()
{
	int i=0,n;
	SD *hptr = 0;
	printf("Enter the No.of node\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		add_init(&hptr);
	circular_link(&hptr);
	print(hptr);
}
void add_init(SD **s)
{
	SD *temp = (SD *)malloc(sizeof(SD ));
	printf("Enter the vowel character\n");
	scanf(" %c",&temp->data);
	if(*s == 0)
	{
		temp->next = 0;
		*s = temp;
	}
	else
	{
		SD *last = *s;
		while(last->next != 0)
			last = last->next;
		temp->next = last->next;
		last->next = temp;
	}
}
void circular_link(SD **s)
{
	SD *last = *s;
	while(last->next != 0 )
		last = last->next;
	last->next = *s;
}
void print(SD *s)
{
	SD *temp = s;
	printf("Vowel Character = ");
	do
	{
		printf("%c ",s->data);
		s = s->next;
	}while(temp != s);
	printf("\n");
}
