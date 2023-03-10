#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
typedef struct Employee_database
{
	int Emp_ID;
	char Name[50];
	char gender;
	char Email_id[50];
	char band[10];
	char DOJ[20];
	char status[20];
	int Mobile_No;
	char Reporting_manager[50];
	char Reportee[50];
	char Tech_area[30];
	char Project_info[50];
	struct Employee_database *next;
}empd;
void read_data(empd **emp);
void view(empd *emp);

int main()
{
	int i=0,flag = 0,num=0;
	char test_data[200],ch;
	empd *hptr = 0,*temp = 0,*new = 0;
	FILE *fp = fopen("TS_Employee_DB.csv","r");
	if(fp == NULL)
	{
		printf("FIle is not there\n");
		return 0;
	}
	fseek(fp,0,SEEK_SET);
	while((ch=fgetc(fp))!=EOF)//reading the excel file data byte by byte till the end of the file
	{
		ch=fgetc(fp);
		test_data[i++]=ch;//storing the data in a char buffer
		new=(empd *)malloc(sizeof(empd));//dynamic memory allocation for structure.
		while((ch=fgetc(fp))!='\n')//reading the data till new line
		{
			if(ch==',')//checking the comma for separating the data
			{
				test_data[i++]='\0';
				i=0;
				flag++;
				if(flag==1)//Employee ID separation condition
				{
					num = atoi(test_data);
					new->Emp_ID=num;//copy the buffer data to struct 
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
				if(flag==7)//Status separation condition
				{
					strcpy(new->status,test_data);
					memset(test_data,'\0',sizeof(test_data));
				}
				if(flag==8)//Mobile No. separation condition
				{
					num=atoi(test_data);
					new->Mobile_No=num;
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
		new->next= NULL;// Initialize the NULL to the new link

		if(hptr == NULL)// check if head is NULL
		{
			new->next = hptr;
			hptr = new;
		}
		else 
		{
			temp = hptr;
			while(temp->next != NULL)
				temp = temp->next;
			new->next = temp->next;
			temp->next = new;
			// Linking the node
		
		}
		printf("Employee id             : %d\n",new->Emp_ID);
		printf("Name                    : %s\n",new->Name);
		printf("Gender                  : %c\n",new->gender);
		printf("Email_id                : %s\n",new->Email_id);
		printf("Band                    : %s\n",new->band);
		printf("DOJ                     : %s\n",new->DOJ);
		printf("Status                  : %s\n",new->status);
		printf("Mobile                  : %d\n",new->Mobile_No);
		printf("Reporting_manager       : %s\n",new->Reporting_manager);
		printf("Reportee                : %s\n",new->Reportee);
		printf("Tech_area               : %s\n",new->Tech_area);
		printf("Project_info            : %s\n",new->Project_info);


	}

	//	fscanf(fp,"%d,%s,%d,%s,%s,%s,%s,%d,%s,%s,%s,%s,",&temp->Emp_ID,temp->Name,&temp->gender,temp->Email_id,temp->band,temp->DOJ,temp->status,&temp->Mobile_No,temp->Reporting_manager,temp->Reportee,temp->Tech_area,temp->Project_info);
	/*
	   while(fgets(file,200,fp)!=NULL)
	   {
	   char *sp;
	   sp = strtok(file,",");
	   while(sp != NULL)
	   {
	   printf(" %-12s ",sp);
	   sp = strtok(NULL,",");
	   }
	   printf("\n");
	   }

*/
	/*
	   printf("Employee id 		: %d\n",temp->Emp_ID);
	   printf("Name 			: %s\n",temp->Name);
	   printf("Gender 			: %d\n",temp->gender);
	   printf("Email_id		: %s\n",temp->Email_id);
	   printf("Band 			: %s\n",temp->band);
	   printf("DOJ 			: %s\n",temp->DOJ);
	   printf("Status			: %s\n",temp->status);
	   printf("Mobile 			: %d\n",temp->Mobile_No);
	   printf("Reporting_manager	: %s\n",temp->Reporting_manager);
	   printf("Reportee		: %s\n",temp->Reportee);
	   printf("Tech_area		: %s\n",temp->Tech_area);
	   printf("Project_info		: %s\n",temp->Project_info);
	   */	
}
