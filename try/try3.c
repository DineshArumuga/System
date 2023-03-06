#include<stdio.h>
void main(){
int var1 =  0x76543210; //consider size of int is 4 bytes
char* cPtr = (char*)&var1;
printf(" Endian value %c", *(cPtr+1));
}
