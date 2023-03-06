#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void my_memcpy(void *d,void *s,size_t size)
{
	int i;
	char *des = (char *)d;
	char *src = (char *)s;
	for(i=0;i<size;i++)
		des[i]=src[i];
}
void my_memmove(void *d,void *s,size_t size)
{
	int i;
	char *des = (char *)d;
	char *src = (char *)s;
	char *temp = (char *)malloc(size * sizeof(char));
	for(i=0;i<size;i++)
		temp[i]=src[i];
	for(i=0;i<size;i++)
		des[i]=temp[i];
}
int main()
{
	int i,size,num1[5],num[] = {10,20,30,40,50};
	char d[]="DInesh_Karthi",s[] = "Dinesh_Karthi";
	size = sizeof(num)/sizeof(num[0]);
	printf("src = %s\n",s);
	my_memcpy(&num1,&num,4*size);
	for(i=0;i<size;i++)
		printf(" %d",num1[i]);
	printf("\n");
	my_memcpy(d+5,s,strlen(s)+1);
	printf("src = %s\n",s);
	printf("copy dec =  %s\n",d);
	my_memmove(&num1+1,&num,4*size);
	for(i=0;i<size;i++)
		printf(" %d",num1[i]);
	printf("\n");
	my_memmove(d+5,s,strlen(s)+1);
	printf("Src = %s \n",s);
	printf("move Des = %s\n",d);
}
