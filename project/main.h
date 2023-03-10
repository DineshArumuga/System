#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

typedef struct project{
int arr[4][3][2];
}Sp;

void declaration(Sp **var);
void rand_function(Sp **ptr);
void print(Sp *ptr);
void string_compare(void);
void pattern(void);
int access_elements(Sp *ptr);
void acending(void);
