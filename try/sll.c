#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student {
	int rollno;
	char name[20];
	float mark;
	struct student *next;
}ST;
void add_begin(ST **ptr);
void print(ST *ptr);
int main()
{
	ST *hptr = 0;
	char option;
	do
	{
		add_begin(&hptr);
		printf("If you want again Y/N \n");
		scanf(" %c",&option);
	}while((option =='y')||(option == 'Y'));
	print(hptr);
}
void add_begin(ST **ptr)
{
	ST *temp = (ST *)malloc(sizeof(ST));
	printf("Enter the Roll number,Name and Mark\n");
	scanf("%d %s %f",&temp->rollno,temp->name,&temp->mark);
	temp->next = *ptr;
	*ptr = temp;
}
void print(ST *ptr)
{
	printf("**********Student Detail************\n");
	while(ptr != 0)
	{
		printf("Student Roll.No	  -> %d\nStudent Name	-> %s\nStudent Mark	-> %f\n\n",ptr->rollno,ptr->name,ptr->mark);
		ptr = ptr->next;
	}
}
