//wap to declare an array of struct containing student data - name , branch , cgpa 
//       - write student_count(..) fn to take input on no.of students 
//          - write input_data(..) fn to input details of student data 
//            		     - write print(..) fn to print details of all students 


#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	char name[20];
	int branch;
	float cgpa;
}st;
int count=0;
void student_rec(st **);
void print(st **);
void count_st(int);
int main()
{
	char ch;int i=0,j=0;
	st *s[10];
	for(i=0;i<10;i++)
		s[i] = (st *) malloc (sizeof(st));
abc:	printf("Enter the 1.Student detial 2.Count No.of students 3.Print the students 4.Exit\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1: student_rec(s);
			break;
		case 2: count_st(count);
			break;
		case 3: print(s);
			break;
		case 4: return 0;

	}
	goto abc;
}
void student_rec(st **p)
{
	printf("Enter the student name,branch and cgpa\n");
	scanf("%s%d%f",p[count]->name,&p[count]->branch,&p[count]->cgpa);
	count++;
}
void print(st **p)
{
	int i;
	for(i=0;i<count;i++){
		printf("%d Student Record\n",i+1);
		printf("Student Name: %s \n",p[i]->name);
		printf("Student branch : %d \n",p[i]->branch);
		printf("Student cgpa : %f \n\n",p[i]->cgpa);
	}
}

void count_st(int a)
{
	printf("Total No.of student = %d\n",a);
}
