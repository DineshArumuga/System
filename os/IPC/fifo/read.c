#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
void main()
{
//	mkfifo("file",0664);
//	perror("mkfifo");
	int fd = open("file",O_RDONLY);
	if(fd<0)
	{
		perror("open");
		return;
	}
	char s[20];
	read(fd,s,sizeof(s));
	perror("Read");
	printf("%s\n",s);
}
