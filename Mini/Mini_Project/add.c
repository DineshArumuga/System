
/* ----------------------------  Function Description   ---------------------------------- */
/***
 * Name of the module:   add.c 
 -----------------------------------------
 * Name of the Function:  add_data function
 *  
 * Date of creation:      16/11/2022
 *
 * Author of module:      Hritik Jain, Dinesh A
 *
 * Description of module: 
 *                      In main menu,when add_data selected head pointer and add the Employee details at the end node.

 * Different functions supported in the module: new_employee_detail, add_data_component.

 * Global variables accessed or modified by the module: Access Structure pointer, TS_India_Employee_DB

 * Revision/Modification History:25/11/2022
 ***/



#include"header.h"

void add_data(employee_database **emp)//Function for add the data from database component
{
	char option;
	int op;
	employee_database *temp = (employee_database *)malloc(sizeof(employee_database));//Dynamic memory allocation for structure.
	op = new_employee_detail(temp);// Calling new_employee_detail(temp) function
	if(op == 0)
	{
		return ;
	}
	if(*emp == NULL)
	{
		temp-> link = *emp; //Assign emp to temp node link
		*emp = temp; //Assign temp address to emp
	}
	else
	{
		employee_database *last=*emp;//Initialize the last to emp 
		while(last->link != NULL)
			last = last->link; // Traversing each before last node
		 temp->link = last->link; //Assign last link to temp link
		 last->link = temp; //Assign temp to last link
	}
	database_add(temp);// Calling add_data_component(temp) function
	printf("\nDo you want view data y/n \n");
	scanf(" %c",&option);
	if((option =='y')||(option == 'Y'))
		view_data(temp->emp_id,temp);

}

int new_employee_detail(employee_database *temp)//Function for Enter the Employee detials
{
	char str[50];
	char s[] = "@thundersoft.com";
	int cnt=0,i,j,len = 1,choose = 0;
        char band[7][15] = {"Vice President","E1","E2","E3","E4","E5","E6"};
	
	printf("Enter the Employee details\n");
        while(1)
	{
		len=1;
		printf("Enter the Employee Id\t\t\t:\t");
		scanf("%s",str);
		if(str[0]!='0')
		{
			printf("Employee ID Every first element start with '0'\n");
			cnt++;
			if(cnt==1)
			{
				printf("You have 2 attempts:\n");
				continue;
			}
			else if(cnt==2)
			{
				printf("You have 1 attempts:\n");
				continue;
			}
			else
			{
				printf("You dont have any more attempts.\n");
				return 0;
			}
			
		}
		for(i=1;str[i];i++)
		{
			if((str[i]>='0')&&(str[i]<='9'))
			{
				len++;
				continue;
			}
			else
			{
				cnt++;
				printf("***************Employee ID taken only for Integer*******************\n");
				if(cnt==1)
				{
					printf("You have 2 attempts:\n");
					break;
				}
				else if(cnt==2)
				{
					printf("You have 1 attempts:\n");
					break;
				}
				else
				{
					printf("You dont have any more attempts.\n");
					return 0;
				}
			}
		}
		if(len == strlen(str))
			break;
	}
	strcpy(temp->emp_id,str);



	cnt=0;
	while(1)
	{
		len=1;
		printf("Enter the Employee Name \t\t:\t");
		scanf(" %[^\n]",str);
		for(i=1;str[i];i++)
		{
			if(str[i]==' ')
			{
				len++;
				continue;
			}
			if(((str[i]>='A')&&(str[i]<='Z'))||((str[i]>='a')&&(str[i]<='z')))
			{
				len++;
				continue;
			}
			else
			{
				cnt++;
				printf("***************Employee Name taken only for Character*******************\n");
				if(cnt==1)
				{
					printf("You have 2 attempts:\n");
					break;
				}
				else if(cnt==2)
				{
					printf("You have 1 attempts:\n");
					break;    
				}  
				else
				{  
					printf("You dont have any more attempts.\n");
					return 0;       
				}       
			} 
		}
		if(len == strlen(str))   
			break;	
	}
	strcpy(temp->name,str);
	


	cnt = 0;
	while(1)
	{
        	printf("Enter the Employee Gender (M/F) \t\t:\t");
        	scanf("%s",str);
		if((str[0]=='M')||(str[0]=='m'))
			break;
		else if((str[0]=='F')||(str[0]=='f'))
			break;
		else
		{
			cnt++;
			printf("***************Employee Name taken only for Character*******************\n");
			if(cnt==1)
			{
				printf("You have 2 attempts:\n");
				continue;
			}
			else if(cnt==2)
			{
				printf("You have 1 attempts:\n");
				continue;
			}
			else
			{
				printf("You dont have any more attempts.\n");
				return 0;
			}

		}
	}
	str[1] = '\0';
	strcpy(temp->gender,str);
        
	

	printf("\nAutomatically taking '@thundersoft.com' \n"); 
	printf("Enter the Employee Email_ID\t\t:\t");
        scanf("%s",str);
	len = strlen(str);
	for(i=len,j=0;s[j];i++)
		str[i]=s[j++];
	str[i] = '\0';
	strcpy(temp->email_id,str);
        
	cnt = 0;
	while(1)
	{
		printf("Choose the Employee Band \n");
        	printf("1.Vice President\n2.E1\n3.E2\n4.E3\n5.E4\n6.E5\n7.E6\n");
		scanf("%d",&choose);
		if((choose>0)&&(choose<8))
			strcpy(temp->band,band[choose-1]);
		else
		{	cnt++;
                        printf("***************Employee Name taken only for Character*******************\n");
                        if(cnt==1)
                        {
                                printf("You have 2 attempts:\n");
                                continue;
                        }
                        else if(cnt==2)
                        {
                                printf("You have 1 attempts:\n");
                                continue;
                        }
                        else
                        {
                                printf("You dont have any more attempts.\n");
                                return 0;
                        }
		}

	}

	
		
	
        printf("Enter the Employee Date of joining \t:\t");
	scanf("%s",temp->doj);
        
	
	printf("Enter the Employee Status \t\t:\t");
        scanf("%s",temp->status);
        printf("Enter the Employee Mobile Number \t:\t");
        scanf("%s",temp->contact_no);
        printf("Enter the Reporting Manager Name \t:\t");
        scanf(" %[^\n]s",temp->reporting_manager);
        printf("Enter the Reportee \t\t\t:\t");
        scanf(" %[^\n]s",temp->reportees);
        printf("Enter the Technical Area \t\t:\t");
        scanf(" %[^\n]s",temp->tech_area);
        printf("Enter the Project Information \t\t:\t");
        scanf("%s",temp->project_info);
}

