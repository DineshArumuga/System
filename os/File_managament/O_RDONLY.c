#include<stdio.h>
//#include<sys/types.h>
//#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
void main()
{
	int fd = open("DATA",O_RDONLY);
	if(fd<0)
	{
		perror("Open");
		return;
	}
	else
	{
		char s[20] = "------------------";
		read(fd,s+4,6);
		perror("Read");
		printf("%s\n",s);
	}
}
