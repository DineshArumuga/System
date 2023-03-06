#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
void main()
{
	mkfifo("file",0664);
	perror("mkfifo");
	int fd = open("file",O_WRONLY);
	if(fd<0)
	{
		perror("open");
		return;
	}
	char s[20];
	printf("Enter the data\n");
	scanf("%s",s);
	write(fd,s,strlen(s)+1);
	perror("Write");
}
