#include<stdio.h>
int main()
{
	int i,j,len,large=0,cnt=0;
	char s[50];
	printf("Enter the string line\n");
	scanf(" %[^\n]",s);
	for(len=0;s[len];len++);
	for(i=0;i<=len;i++)
	{
		if((s[i]==' ')||(s[i]=='\0'))
		{
			if(cnt>large)
				large = cnt;
			cnt = 0;
		}
		else
			cnt++;
	}
	printf("Count of largest string is '%d'\n",large);
}
