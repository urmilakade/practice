#include"header.c"

void deletion()
{
	if(front == 0 )
		printf("Queue is underflow\n");
	else
	{
		printf("deleted data %d\n",front->data);
		front = front->next;

	}
}
