#include"header.c"

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
