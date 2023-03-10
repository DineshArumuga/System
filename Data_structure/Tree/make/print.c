#include"header.c"

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
