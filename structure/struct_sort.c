//wap to declare an array of struct with a char data type and initialize the character with "h" ,"e" ,"l","l","o" and sort the array in alphabetical order - use malloc / calloc for struct variable 

#include<stdio.h>
#include<stdlib.h>
typedef struct array
{
	char name;
}st;
void sort_arr(st **);
int main()
{
	int i;
	char p[5]={'h','e','l','l','o'};
	st *s[5];
	for(i=0;i<5;i++)
		s[i]=(st *)malloc(sizeof(st));
	for(i=0;i<5;i++)
		s[i]->name=p[i];
	for(i=0;i<5;i++)
		printf("%c ",s[i]->name);
	printf("\n");
	sort_arr(s);
	for(i=0;i<5;i++)
		printf("%c ",s[i]->name);
	printf("\n");
}
void sort_arr(st **v)
{
	int i,j;
	char temp;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(v[i]->name<v[j]->name)
			{
				temp = v[i]->name;
				v[i]->name = v[j]->name;
				v[j]->name = temp;
			}
		}
	}
}

