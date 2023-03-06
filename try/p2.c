#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	if(fork()==0)
	{
		printf("child process.... %d \n",getpid());
		sleep(5);
		printf("child process is finished\n");
		exit(2);
	}
	else
	{
		int r,s;
		printf("parent process...\n");
		r=wait(&s);
		printf("parent pocess is finished...\nr =%d s =%d \n",r,s);
	}
}
