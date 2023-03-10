#include"header.h"
void add_data(employee_database **emp)
{
	employee_database *temp = (employee_database *)malloc(sizeof(employee_database));
/*
	printf("Enter the Employee details\n");
        printf("Enter the Employee Id\t:\t");
        scanf("%s",temp->Emp_ID);
        printf("Enter the Employee Name \t:\t");
        scanf(" %[^\n]",temp->Name);
        printf("Enter the Employee Gender \t:\t");
        scanf("%s",temp->gender);
        printf("Enter the Employee Email_ID\t:\t");
        scanf("%s",temp->Email_id);
        printf("Enter the Employee Band \t:\t");
        scanf("%s",temp->band);
        printf("Enter the Employee Date of joining \t:\t");
        scanf("%s",temp->DOJ);
        printf("Enter the Employee Status \t:\t");
        scanf("%s",temp->status);
        printf("Enter the Employee Mobile Number \t:\t");
        scanf("%s",temp->Mobile_No);
        printf("Enter the Reporting Manager Name \t:\t");
        scanf(" %[^\n]",temp->Reporting_manager);
        printf("Enter the Reportee \t:\t");
        scanf(" %[^\n]",temp->Reportee);
        printf("Enter the Technical Area \t:\t");
        scanf(" %[^\n]",temp->Tech_area);
	printf("Enter the Project Information \t:\t");
    	scanf("%s",temp->Project_info);
*/
	temp = new_employee_detail(temp);
	if(*emp == NULL)
	{
		temp->next = *emp;
		*emp = temp;
	}
	else
	{
		employee_database *last=*emp;
		while(last->next != NULL)
			last = last->next;
		 temp->next = last->next;
		 last->next = temp;
	}
	add_data_component(temp);
}

employee_database* new_employee_detail(employee_database *temp)
{
        printf("Enter the Employee details\n");
        printf("Enter the Employee Id\t:\t");
        scanf("%s",temp->Emp_ID);
        printf("Enter the Employee Name \t:\t");
        scanf(" %[^\n]",temp->Name);
        printf("Enter the Employee Gender \t:\t");
        scanf("%s",temp->gender);
        printf("Enter the Employee Email_ID\t:\t");
        scanf("%s",temp->Email_id);
        printf("Enter the Employee Band \t:\t");
        scanf("%s",temp->band);
        printf("Enter the Employee Date of joining \t:\t");
        scanf("%s",temp->DOJ);
        printf("Enter the Employee Status \t:\t");
        scanf("%s",temp->status);
        printf("Enter the Employee Mobile Number \t:\t");
        scanf("%s",temp->Mobile_No);
        printf("Enter the Reporting Manager Name \t:\t");
        scanf(" %[^\n]",temp->Reporting_manager);
        printf("Enter the Reportee \t:\t");
        scanf(" %[^\n]",temp->Reportee);
        printf("Enter the Technical Area \t:\t");
        scanf(" %[^\n]",temp->Tech_area);
        printf("Enter the Project Information \t:\t");
        scanf("%s",temp->Project_info);
	return temp;
}

void add_data_component(employee_database *emp)
{
        FILE *fp = fopen("TS_Employee_DB.csv","r+");
        if(fp == NULL)
        {
                printf("FIle is not there\n");
                return ;
        }
        fseek(fp,0,SEEK_END);
        fprintf(fp,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",emp->Emp_ID,emp->Name,emp->gender,emp->Email_id,emp->band,emp->DOJ,emp->status,emp->Mobile_No,emp->Reporting_manager,emp->Reportee,emp->Tech_area,emp->Project_info);
        rewind(fp);
        fclose(fp);
}

