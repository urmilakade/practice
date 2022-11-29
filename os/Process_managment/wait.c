#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
pid_t p,w1;
int wstatus;
printf("before fork\n");
p=fork();
if(p==0)
{
printf("I am child having id %d\n",getpid());
printf("My parent's id is %d\n",getppid());
}
else{
wait(NULL);
/*
w1 = wait(&wstatus);
printf("PID of child is %d\n\n",w1);
printf("status of WIFEXITED(wstatus)) is  %d\n",WIFEXITED(wstatus));
printf("status of WEXITSTATUS(wstatus)is %d\n", WEXITSTATUS(wstatus));
printf("status of WIFSIGNALED(wstatus) is %d\n", WIFSIGNALED(wstatus));
printf("status of WTERMSIG(wstatus) is %d\n", WTERMSIG(wstatus));
printf("status of WCOREDUMP(wstatus) is %d\n", WCOREDUMP(wstatus));
printf("status of WIFSTOPPED(wstatus) is %d\n", WIFSTOPPED(wstatus));
printf("status of WSTOPSIG(wstatus) is %d\n", WSTOPSIG(wstatus));
printf("status of WIFCONTINUE(wstatus) is %d\n", WIFCONTINUE(wstatus));
*/
printf("\nMy child's id is %d\n",p);
printf("I am parent having id %d\n",getpid());
}
}
