#include<pthread.h>
#include<stdio.h>
#include<unistd.h>
void *fun1();
 void *fun2();
 pthread_mutex_t first_mutex,second_mutex; //Mutex variable
 int main()
 {
 pthread_mutex_init(&first_mutex,NULL); //initialize mutex variable
 pthread_mutex_init(&second_mutex,NULL); //initialize mutex variable
 pthread_t thread1, thread2;
 pthread_create(&thread1, NULL, fun1, NULL);
 pthread_create(&thread2, NULL, fun2, NULL);
 pthread_join(thread1, NULL);
 pthread_join(thread2,NULL);
 printf("thread join\n");
 }

void *fun1()
{
    
    printf("thread1 trying to acquired first mutex\n");
    pthread_mutex_lock(&first_mutex);
    printf("thread 1 acquired the first lock\n");
    sleep(1); //thread1 is preempted by thread 2
    printf("thread1 trying to acquired second mutex\n");
    pthread_mutex_lock(&second_mutex);
    printf("thread 1 acquired the second lock\n");
    pthread_mutex_unlock(&first_mutex);
    printf("thread 1 released the first lock\n\n");
}

void *fun2()
{
   printf("thread2 trying to acquired second mutex\n");
    pthread_mutex_lock(&second_mutex);
    printf("thread 2 acquired the second lock\n");
    sleep(1); //thread2 is preempted by thread 1
    printf("thread2 trying to acquired first mutex\n");
    pthread_mutex_lock(&first_mutex);
    printf("thread 2 acquired the first lock\n");
    pthread_mutex_unlock(&second_mutex);
    printf("thread 1 released the second lock\n\n");


}

