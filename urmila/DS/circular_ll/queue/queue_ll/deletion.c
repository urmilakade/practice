#include"header.c"

void deletion()
{
	if(front == 0 )
		printf("Queue is underflow\n");
	else
	{
		printf("deleted data %d\n",front->data);
		if(front == rare)
		{
			free(front);
			front = NULL;
		}
		else
		{
			queue *temp = front;
			front = front->next;
			rare->next = front;
			free(temp);
		
		}

	}
}
