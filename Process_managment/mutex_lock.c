#include<pthread.h>
#include<stdio.h>
#include<unistd.h> 
void *fun1();
 void *fun2();
 int shared=1; //shared variable
 pthread_mutex_t t; //Mutex variable
 int main()
 {
 pthread_mutex_init(&t,NULL); //initialize mutex variable
 pthread_t thread1, thread2;
 pthread_create(&thread1, NULL, fun1, NULL);
 pthread_create(&thread2, NULL, fun2, NULL);
 pthread_join(thread1, NULL);
 pthread_join(thread2,NULL);
 printf("Final value of shared is %d\n",shared); //prints the last updated value of shared variable
 }

void *fun1()
{
    int x;
    printf("thread1 trying to acquired lock\n");
    pthread_mutex_lock(&t);
    printf("thread 1 acquired the lock\n");
    x=shared;//thread1 reads value of shared variable
    printf("Thread1 reads the value as %d\n",x);
    x++;  //thread1 increments its value
    printf("Local updation by Thread1: %d\n",x);
    sleep(1); //thread1 is preempted by thread 2
    shared=x; //thread one updates the value of shared variable
    printf("Value of shared variable updated by Thread1 is: %d\n",shared);    
    pthread_mutex_unlock(&t);
    printf("thread 1 released the lock\n\n");
}

void *fun2()
{
    int y;
    printf("thread2 trying to acquired lock\n");
    pthread_mutex_lock(&t);
    printf("thread2 acquired the lock\n");
    y=shared;//thread2 reads value of shared variable
    printf("Thread2 reads the value as %d\n",y);
    y--;  //thread2 increments its value
    printf("Local updation by Thread2: %d\n",y);
    sleep(1); //thread1 is preempted by thread 1
    shared=y; //thread one updates the value of shared variable
    printf("Value of shared variable updated by Thread2 is: %d\n",shared);    
    pthread_mutex_unlock(&t);
    printf("thread 2 released the lock\n");

}
