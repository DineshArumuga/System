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

