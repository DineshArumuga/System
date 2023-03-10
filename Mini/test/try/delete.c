#include"header.h"
void delete_data(employee_database **emp)
{
	char num[15];
	char check=0;
	printf("Enter the Delete Employee Id\n");
	scanf("%s",num);
	employee_database *temp=*emp,*last = *emp;
	while(temp!=0)
	{
		if(*emp == NULL)
		{
			printf("Database is Empty !!!\n");
			return;
		}
		else if((strcmp((*emp)->Emp_ID,num))==0)
		{
			printf("|***************Warning****************|\n");
			printf("If you delete employee detials once's you can not recovery it....\nPress Yes|No \n");
			scanf(" %c",&check);
			if((check == 'y')||(check == 'Y'))
			{
				*emp = temp->next;
				free(temp);
				return ;
			}
			else
				return ;
		}
		else if((strcmp(temp->Emp_ID,num))==0)
		{
			printf("|***************Warning****************|\n");
                        printf("If you delete employee detials once's you can not recovery it....\nPress Yes|No \n");
                        scanf(" %c",&check);
			if((check == 'y')||(check == 'Y'))
                        {
				printf("deleted\n");
				last->next = temp->next;
				free(temp);
				sleep(3);
				return ;
			}
			else
				return;
		}
		last = temp;
		temp = temp->next;
	}
}
