#include"header.h"

void view(employee_database *emp)
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	while(emp!=0)
	{
		if(emp->Emp_ID == num)
			printf("ID is matching\n");
		emp=emp->next;
	}
}
