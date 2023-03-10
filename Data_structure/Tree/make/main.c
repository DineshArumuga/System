#include"header.c"
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
