#include<stdio.h>
#include<stdlib.h>
typedef struct tree
{
	struct tree *left;
	int roll;
	struct tree *right;
}T;
void init_tree(T **,int);
void Pre_order(T *);
void In_order(T *);
void Post_order(T *);

int main()
{
	char ch;int n,i;
	T *hptr = 0;
	do
	{
		printf("Enter the Data\n");
		scanf("%d",&n);
		init_tree(&hptr,n);
		printf("If U want repeat Y/N\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	void (*fp[])(T *)={Pre_order,In_order,Post_order};
	printf("Press Any chice 1.Pre_order 2.In_order 3.Post_order\n");
	scanf("%d",&i);
	if(i<=3)
		(*fp[i-1])(hptr);
}

void init_tree(T **ptr,int n)
{
	if(*ptr==0)
	{
		(*ptr) = (T*)malloc(sizeof(T));
		(*ptr)->roll = n;
		(*ptr)->left=(*ptr)->right=0;
	}
	else if(((*ptr)->roll) > n)
		init_tree(&(*ptr)->left,n);
	else 
		init_tree(&(*ptr)->right,n);		
}
void Pre_order(T *ptr)
{
	if(ptr!=0)
	{
		printf("%d ",ptr->roll);
		Pre_order(ptr->left);
		Pre_order(ptr->right);
	}
}
void In_order(T *ptr)
{
	if(ptr!=0)
	{
		In_order(ptr->left);
		printf("%d ",ptr->roll);
		In_order(ptr->right);
	}
}
void Post_order(T *ptr)
{
	if(ptr!=0)
	{
		Post_order(ptr->left);
		Post_order(ptr->right);
		printf("%d ",ptr->roll);
	}
}
