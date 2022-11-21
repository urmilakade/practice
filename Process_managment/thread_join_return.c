#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
void *MY_turn(void *arg);
void your_turn(void);

 int main() {

	 int * k =0;
 pthread_t a_thread;  //thread declaration  
 pthread_create(&a_thread, NULL, MY_turn, NULL); //thread is created
// pthread_join(a_thread ,NULL);
 your_turn();
 pthread_join(a_thread ,(void *)&k);
 printf("Inside Main Program k =%d\n",*k);

 }


void *MY_turn(void *arg)//thread_functin
{
// the work to be done by the thread is defined in this function
 int *ptr = (int *)malloc(sizeof(int));
 *ptr = 5;

  for(int  i =0; i<8;i++)
  {
          sleep(1);
          printf("My_turn %d %d\n",i,*ptr);
	  (*ptr)++;
  }

  return ptr;
}

void your_turn(){


  for(int i =0; i< 5;i++)
  {
          sleep(1);
          printf("your_turn %d\n",i);
  }
}

