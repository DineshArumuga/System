#include"header.h"
void view(employee_database *new)
{
	while(new!=NULL)
	{
		printf("Employee id             : %s\n",new->Emp_ID);
		printf("Name                    : %s\n",new->Name);
		printf("Gender                  : %s\n",new->gender);
		printf("Email_id                : %s\n",new->Email_id);
		printf("Band                    : %s\n",new->band);
		printf("DOJ                     : %s\n",new->DOJ);
		printf("Status                  : %s\n",new->status);
		printf("Mobile                  : %s\n",new->Mobile_No);
		printf("Reporting_manager       : %s\n",new->Reporting_manager);
		printf("Reportee                : %s\n",new->Reportee);
		printf("Tech_area               : %s\n",new->Tech_area);
		printf("Project_info            : %s\n",new->Project_info);
		printf("\n");
		new = new->next;
	}
}
