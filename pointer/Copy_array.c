//Write a C program to copy one array to another using pointers.


#include<stdio.h>
typedef int integer;
integer* arr_cpy(int *,int *);
integer main()
{
	enum e {a,b,c,d,e,f};
	integer p[f],q[f],i;
	printf("Enter the number\n");
	for(i=a;i<f;i++)
		scanf("%d",&p[i]);
	printf("Copy one array element into another array\n");
	printf("P = ");
	for(i=a;i<f;i++)
		printf("%d ",p[i]);
	printf("\n");
	arr_cpy(p,q);
	printf("Q = ");
	for(i=a;i<f;i++)
		printf("%d ",q[i]);
	printf("\n");
}
integer* arr_cpy(int *p,int *q)
{
	integer i;
	for(i = 0;i < 5; i++)
		q[i] = p[i];
	return q;
}

