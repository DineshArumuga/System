#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
void main()
{
	mkfifo("f1",0664);
	mkfifo("f2",0664);
	perror("MKFIFO");
	int fd1 = open("f1",O_RDONLY);
	int fd2 = open("f2",O_WRONLY);
	char s[20];
	if(fork()==0)
	{
		while(1)
		{
			printf("Enter the data\n");
			scanf("%s",s);
			write(fd2,s,strlen(s));
			perror("Write 1");
		}
	}
	else
	{
		while(1)
		{
			read(fd1,s,sizeof(s));
			printf("%s\n",s);
			perror("Read 1");
		}
	}
}
