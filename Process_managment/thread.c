

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
void *MY_turn(void *arg);
void your_turn(void);
 
 int main() {

 pthread_t a_thread;  //thread declaration  
 pthread_create(&a_thread, NULL, MY_turn, NULL); //thread is created
 your_turn();
 printf("Inside Main Program\n");
 }

    
void *MY_turn(void *arg)//thread_functin
{
// the work to be done by the thread is defined in this function

  while(1)
  {
	  sleep(1);
	  printf("My_turn\n");
  }
  return NULL;
}

void your_turn(){

  while(1)
  {
	  sleep(1);
	  printf("your_turn\n");
  }
}
