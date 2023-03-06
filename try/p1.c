#include<stdio.h>
#include<setjmp.h>
void abc();
jmp_buf e;

int main()
{
	int r;
	printf("Hello./..\n");
	r=setjmp(e);
	printf("r =%d \n",r);
	abc();
}
void abc()
{
	static int i=1;
	sleep(2);
	printf("Abc function\n");
	if(i==4)
		return;
	longjmp(e,i++);
}
