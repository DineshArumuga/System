#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
typedef struct Employee_database
{
        char Emp_ID[10];
        char Name[50];
        char gender[5];
        char Email_id[50];
        char band[10];
        char DOJ[20];
        char status[20];
        char Mobile_No[15];
        char Reporting_manager[50];
        char Reportee[50];
        char Tech_area[50];
        char Project_info[50];
        struct Employee_database *next;
}employee_database;
void data_component(employee_database **);
void view(employee_database *);
void add_data(employee_database **);
void delete_data(employee_database **);
employee_database* new_employee_detail(employee_database *);
void add_data_component(employee_database *);



