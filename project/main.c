#include"main.h"

int main()
{
	void (*fp)(void) = string_compare;
	int var;
	Sp *st;
	declaration(&st);
	rand_function(&st);
	print(st);	
	var = access_elements(st);
	printf("Element = %d\n",var);
	if(var%10==0)
		pattern();
	if(var%2==0)
		fp();
	if(var%2!=0)
		acending();

}

