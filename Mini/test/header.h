#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
typedef struct Employee_database
{
	int Emp_ID;
	char Name[50];
	int gender;
	char Email_id[50];
	char band[10];
	char DOJ[10];
	int Mobile_No;
	char Reporting_manager[50];
	char Reportee[50];
	char Tech_area[30];
	char Project_info[50];
	struct Employee_database *next;
}employee_database;
void read_data(employee_database **emp);
void view(employee_database *emp);

