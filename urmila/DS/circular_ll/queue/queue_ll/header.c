#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node * next;
}queue;

extern queue *front, *rare;

void insertion(void);
void deletion(void);
void display(void);
