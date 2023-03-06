#include<stdio.h>
int  main()
{
	int num,pos,ele,i,a,b;
	printf("Enter the number \n");
	scanf("%d",&num);
	printf("Enter the position \n");
	scanf("%d",&pos);
	printf("ENter the elemnt\n");
	scanf("%d",&ele);

	for(i=pos+ele;i<32;i++)
		b=num&(~(1<<i));
	
	
	a=b>>pos;

	printf("%d\n",a);

	
}
