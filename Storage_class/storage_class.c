#include<stdio.h>
#include<unistd.h>

void auto_storage(void );
void register_storage(void );
void static_storage(void );
void extern_storage(void );


static int s=10;
extern int x;

int main()
{
	int i;
abc:	printf("Enter the 1)auto 2)register 3)static 4)extern\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:	auto_storage();
			break;
		case 2: register_storage();
			break;
		case 3: static_storage();
			break;
		case 4: extern_storage();
			break;
		default:printf("Invalid operation\n");
			sleep(2);
			goto abc;
	}
}

void auto_storage(void)
{
	auto int a;
	printf("Default value = %d \n",a);
	printf("Memory allocate in stack section \n");
	a = 10;
	printf("Auto value = %d \n",a);

}

void register_storage(void)
{
	register int a;
	printf("Default value = %d\n",a);
	printf("Memory allocate in Internal CPU register \n");
	a = 10;
	printf("Register value = %d \n",a);
}

void static_storage(void)
{
	{
		static int s;
		printf("Default value = %d\n",s);
		printf("Memory allocate in uninitialized data section = %d \n",s);
	}
	{
		static int s=20;
		printf("Memory allocate in initialized data section = %d \n",s);
	}
	printf("Global Static = %d \n",s);

}

void extern_storage(void)
{	
	int x;
	printf("Default value = %d \n",x);
	printf("Memory allocate in Data section \n");
	x=10;
	printf("Extern value = %d\n",x);


}

