//Convert Lowercase to Uppercase
#include<stdio.h>

int main()
{
printf("Convert Lowercase to Uppercase\n");
char s[] = "dinesh";
int i,size;
for(size=0;s[size];size++);
printf("Before Converting = %s\n",s);
for(i=0;s[i];i++)
s[i]=s[i]^32;
printf("After Converting = %s\n",s);

}
