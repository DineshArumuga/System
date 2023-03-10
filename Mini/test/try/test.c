#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
typedef struct Employee_database
{
	int Emp_ID;
	char Name[50];
	enum Gender{male,female}gender;
	char Email_id[50];
	char band[3];
	char DOJ[20];
	struct mobile
	{
	int Mobile_No;
	}Mob;
	char Reporting_manager[50];
	char Tech_area[30];
	char Project_info[50];
}em;

void add()
{
	em p;
	FILE *fp  = fopen("Data.xlsx","r+");
	if(fp == NULL)
	{
		printf("File Excit ...");
		return ;
	}
	fseek(fp,0,SEEK_END);
	printf("Enter the data\n");
	scanf("%d",&p.Emp_ID);
	scanf("%s",p.Name);
	scanf("%s",p.Email_id);
	scanf("%s",p.Reporting_manager);
	fprintf(fp,"%d\t",p.Emp_ID);
	fprintf(fp,"%s\t",p.Name);
	fprintf(fp,"%s\t",p.Email_id);
	fprintf(fp,"%s\n",p.Reporting_manager);
	fclose(fp);
}
void delete()
{
	int d,f,h;
	printf("Enter the Id \n");
	scanf("%d",&d);
	FILE *fp = fopen("Data.xlsx","r+");
	while((fscanf(fp,"%d",&f))!=-1)
	{

		fprintf(fp,"\n");
		printf("%d\n",f);
		if(f==d)
		{
			printf("EMPLOYEE ID matching...\n");
			return;
		}
		sleep(2);
	}
	fclose(fp);

}
int main()
{
	add();
	//delete();
}
