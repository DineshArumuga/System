//Convert Uppercase to Lowercase
#include<stdio.h>

int main()
{
printf("Convert Uppercase to Lowercase\n");
char s[] = "DINESH A";
int i,size;
for(size=0;s[size];size++);
printf("Before Converting = %s\n",s);
for(i=0;s[i];i++)
s[i]=s[i]^32;
printf("After Converting = %s\n",s);

}
