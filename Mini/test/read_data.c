#include"header.h"
employee_database *head =NULL,*temp =NULL;
void read_data(employee_database **emp)
{
	char ch;
	char test_data[50];//char buffer for temporarily store the data
	int  i=0, flag=0 ,k=0;
	employee_database *new=NULL;//Linked list variable
	FILE *fp;//file pointer
	fp=fopen("TS_Employee_DB.xlsx","r");//open excel file in the read mode
	if(fp=NULL)
	{
		printf("File cannot opened sucessfully\n");
	}
	else
	{
		while((ch=getc(fp))!=EOF)//reading the excel file data byte by byte till the end of the file
		{
			test_data[i++]=ch;//storing the data in a char buffer
			new=(employee_database *)malloc(sizeof(employee_database));//dynamic memory allocation for structure.
			while((ch=getc(fp))!='\n')//reading the data till new line
			{
				if(ch==',')//checking the comma for separating the data
				{
					i=0;
					flag++;
					if(flag==1)//Employee ID separation condition
					{
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
						new->gender=test_data[0];
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
				/*	if(flag==7)//Status separation condition
					{
						strcpy(new->status,test_data);
						memset(test_data,'\0',sizeof(test_data));
						flag=0;
					}*/
					if(flag==8)//Mobile No. separation condition
					{
						strcpy(new->Mobile_No,test_data);
						test_data[26]='\0';
						test_data[27]='\0';
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
					}

				}
				else
				{
					test_data[i++]=ch;//Storing the data in buffer
				}
			}
			new->next= NULL;// Initialize the NULL to the new link

			if(head == NULL)// check if head is NULL
			{
				head= temp= new;
			}
			else
			{
				temp->next= new;// Linking the node
				temp= new;
			}
		}
	}
}
