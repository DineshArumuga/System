#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#define MAX 20
int count = 0;
void *even(void *p);
void *odd(void *q);
pthread_mutex_t mutex;
int main()
{
	//pthread_mutex_init();
        pthread_t even1,odd1;
        void *p,*q;
        pthread_create(&even1,NULL,even,"Even Number");
        pthread_create(&odd1,NULL,odd,"Odd Number");
        pthread_join(even1,&p);
        pthread_join(odd1,&q);
        printf("%s\n",(char *)p);
        printf("%s\n",(char *)q);
}
void *even(void *p)
{
        while(count<=MAX)
        {
	pthread_mutex_lock(&mutex);
                if(count%2==0)
                        printf("%s : %d \n",(char *)p,count++);
               // sleep(0.5);
	pthread_mutex_unlock(&mutex);
        }
        pthread_exit("Even Thread is terminated");
}
void *odd(void *q)
{
        while(count<=MAX)
        {
	pthread_mutex_lock(&mutex);
                if(count%2==1)
                        printf("%s  : %d \n",(char *)q,count++);
                //sleep(0.5);
	pthread_mutex_unlock(&mutex);
        }
        pthread_exit("Odd Thread is terminated");
}

