//program to remove duplicates using array method and linked list.
#include<stdio.h>
#include<stdlib.h>
typedef struct remove
{
	int arr;
	struct remove *next;
}SR;
void init(SR **);
void Remove(SR **);
void print(SR *);
int flag = 0;
int main()
{
	SR *hptr=0;
	char ch;
	void (*fp[2])(SR **)={init,Remove};
	do{
		fp[0](&hptr);
		printf("If you want again Y|N\n");
		scanf(" %c",&ch);
	}while((ch == 'y')||(ch == 'Y'));
	printf("Total node = %d \n",flag);
	fp[1](&hptr);
	printf("After Dupicate remove = %d \n",flag);
	print(hptr);
}
void init(SR **input)
{
	SR *temp;
	temp = (SR *)malloc(sizeof(SR));
	printf("Enter the Data\n");
	scanf("%d",&temp->arr);
	if(*input == 0)
		*input = temp;
	else
	{
		SR *last = *input;
		while(last->next!=0)
			last = last->next;
		temp->next = last->next;
		last->next = temp;
	}
	flag++;
}
void Remove(SR **input)
{
	SR *first = *input,*last,*temp = *input;
	while(temp->next!=0)
	{
		last = temp->next;
		while(last!=0)
		{
		/*	if((**input)->arr == last->arr)
			{
				*input = last;
				free(temp);
			}*/
			if(temp->arr == last->arr)
			{
				first->next = last->next;
			//	free(last);
				flag--;
			}
			else
				first = last;
			last = last->next;
		}
		temp = temp->next;
	}
}
void print(SR *input)
{
	while(input!=0)
	{
		printf("%d ",input->arr);
		input = input->next;
	}
	printf("\n")

}
