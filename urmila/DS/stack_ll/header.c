#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node * next;
}node_st;
extern struct node *top;


void push(void);
void pop(void);
void display(void);
