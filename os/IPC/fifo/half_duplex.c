#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
void main()
{
	mkfifo("f1",0664);
	mkfifo("f2",0664);
	perror("Mkfifo");
	int fd = open("f1",O_WRONLY);
	int fs = open("f2",O_RDONLY);
	if((fd<0)&&(fs<0))
	{
		perror("OPEN");
		return;
	}
	
	char s[20];
	printf("IN half duplex \n");
	printf("Enter the data\n");
	scanf("%s",s);
	write(fd,s,strlen(s));
	perror("Write");
	read(fs,s,sizeof(s));
	printf("%s\n",s);
	
}
