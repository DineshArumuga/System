#include"header.h"
void data_component(employee_database **hptr)
{
	int i=0,j=0,flag = 0,num=0;
	char test_data[200],ch;
	employee_database *temp = 0,*new = 0;
	FILE *fp = fopen("TS_Employee_DB.csv","r+");
	if(fp == NULL)
	{
		printf("FIle is not there\n");
		return ;
	}
	fseek(fp,0,SEEK_SET);
	while((ch=fgetc(fp))!=EOF)//reading the excel file data byte by byte till the end of the file
	{

		test_data[i++]=ch;//storing the data in a char buffer
		new=(employee_database *)malloc(sizeof(employee_database));//dynamic memory allocation for structure.
		while((ch=fgetc(fp))!='\n')//reading the data till new line
		{
			if(ch==',')//checking the comma for separating the data
			{
				test_data[i++]='\0';
				i=0;
				flag++;
				if(flag==1)//Employee ID separation condition
				{
					for(j=0;test_data[j];j++)
						test_data[j]=test_data[j+2];
					strcpy(new->Emp_ID,test_data);//copy the buffer data to struct
					memset(test_data,'\0',sizeof(test_data));//clear the buffer
				}
				if(flag==2)//Name separation condition
				{
					strcpy(new->Name,test_data);
					memset(test_data,'\0',sizeof(test_data));
				}
				if(flag==3)//Gender separation condition
				{
					strcpy(new->gender,test_data);
					memset(test_data,'\0',sizeof(test_data));
				}
				if(flag==4)//Email ID separation condition
				{
					strcpy(new->Email_id,test_data);
					memset(test_data,'\0',sizeof(test_data));
				}
				if(flag==5)//band separation condition
				{
					strcpy(new->band,test_data);
					memset(test_data,'\0',sizeof(test_data));
				}
				if(flag==6)//DOJ separation condition
				{
					strcpy(new->DOJ,test_data);
					memset(test_data,'\0',sizeof(test_data));
				}
				if(flag==7)//Status separation condition
				{
					strcpy(new->status,test_data);
					memset(test_data,'\0',sizeof(test_data));
				}
				if(flag==8)//Mobile No. separation condition
				{
					strcpy(new->Mobile_No,test_data);
					memset(test_data,'\0',sizeof(test_data));
				}
				if(flag==9)//Reporting Manager separation condition
				{
					strcpy(new->Reporting_manager,test_data);
					memset(test_data,'\0',sizeof(test_data));
				}
				if(flag==10)//Reportees separation condition
				{
					strcpy(new->Reportee,test_data);
					memset(test_data,'\0',sizeof(test_data));
				}
				if(flag==11)//TEch_area separation condition
				{
					strcpy(new->Tech_area,test_data);
					memset(test_data,'\0',sizeof(test_data));
				}
				if(flag==12)//Project info separation condition
				{
					strcpy(new->Project_info,test_data);
					memset(test_data,'\0',sizeof(test_data));
					flag = 0;
				}

			}
			else
			{
				test_data[i++]=ch;//Storing the data in buffer
			}
		}
		if(num>0)
		{
			if(*hptr == NULL)// check if head is NULL
			{
				new->next = *hptr;
				*hptr = new;
			}
			else
			{
				temp = *hptr;
				while(temp->next != NULL)
					temp = temp->next;
				new->next = temp->next;
				temp->next = new;
			}
		}
		if(ch == '\n')
			num++;
	}
}
