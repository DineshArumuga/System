#include"header.h"
int main()
{
	employee_database *hptr = 0;
	data_component(&hptr);
	add_data(&hptr);
	//delete_data(&hptr);
	view(hptr);
}
