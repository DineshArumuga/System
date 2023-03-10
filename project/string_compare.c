#include"main.h"

void string_compare(void)
{
	printf("\nNumber is even :\n");
	char str1[100],str2[100];
	int result;

	printf("Enter a string 1 : ");
	fgets(str1,100,stdin);

	printf("Enter a string 2 : ");
	fgets(str2,100,stdin);


	result=(strcmp(str1,str2));
	if(result==0)
		printf("String is same.\n");

	else
		printf("String is not same.\n");

}
