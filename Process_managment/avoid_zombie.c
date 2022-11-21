
//zombie.c
#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
int main()
{
   pid_t t;
   t=fork();
   if(t==0)
   {
       printf("Child having id %d\n",getpid());
    }
    else
    {
	    wait(NULL);
        printf("Parent having id %d\n",getpid());
    }
}
