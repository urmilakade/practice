#include"header.c"

void display()
{
	if(front == 0)
		printf("Queue is empty\n");
	else
	{
		queue *ptr = front;
		do
		{	printf("ptr= %p\tdata= %d\tnext=%p\n\r ",ptr,ptr->data,ptr->next);
			ptr = ptr->next;
		}while(ptr != front);
		printf("\n");
	}
}
