#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
pid_t p,q;
printf("before fork\n");
p=fork();
if(p==0)//child1
{
printf("I am first child having id %d\n",getpid());
printf("My parent's id is %d\n",getppid());
}
else{
q=fork();//child2
if(q==0)
{
printf("I am second child having id %d\n",getpid());
printf("My parent's id is %d\n",getppid());
}
else
{
waitpid(p,NULL,0);
printf("My first child's id is %d\n",p);
printf("My second child's id is %d\n",q);
printf("I am parent having id %d\n",getpid());
}

}
}
