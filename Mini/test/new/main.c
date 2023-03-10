#include"header.h"

int main()
{
	employee_database *hptr = 0;
	data_component(&hptr);

	int choice, cnt=0;
	while(1)
	{
		printf("1.Add, 2.View, 3.Modify, 4.Delete, 5.Exit\n ");
		printf("Please enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: //data_component(&hptr);
				add_data(&hptr);


			case 2: view(hptr);
				break;

			case 3: data_component(&hptr);
				modify_employee_details(&hptr); 

				//			case 4: delete();

			case 5: return 0;

			default:cnt++;
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
					printf("You dont have any more attempts.\n");
				return 0;

		}
	}
}
