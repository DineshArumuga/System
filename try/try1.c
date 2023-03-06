#include<stdio.h>
struct st
{
	int l;
	float f;
//	unsigned int s;
//	unsigned short int o;
//	char k;
//	char i;
	long long int g;
}str;
int main()
{
	struct st *p;
	char *ptr;
	ptr = p+1;
	printf("%ld\n",ptr - (char *)p);
	

}
