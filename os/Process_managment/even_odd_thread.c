#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#define MAX 30
int cnt= 0;
int l=1;

void *even() 
{                
	while(cnt<=MAX)
	{
                sleep(2);
		if(cnt%2==0){
			printf(" even num =%d\n",cnt);
		cnt++;}
			
	}
pthread_exit(0);
}

void *odd()
{
	while(cnt<=MAX)
	{
	sleep(2);
		if(cnt%2==1){
			printf("odd num =%d \n",cnt);
		cnt++;}
			

	}
	pthread_exit(0);
}

void *fun()
{
printf("nikhil\n");
}

int main()
{
int t;
	pthread_t event;
	pthread_t oddt;
	pthread_create(&event,NULL,&even,NULL);
	pthread_create(&oddt,NULL,&odd,NULL);
	pthread_join(event,NULL);
	pthread_join(oddt,NULL);
printf("\n");

}
