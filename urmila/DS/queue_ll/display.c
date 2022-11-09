#include"header.c"

void display()
{
	if(front == 0)
		printf("Queue is empty\n");
	else
	{
		queue *ptr = front;
		while(ptr != 0){
			printf("%d ",ptr->data);
			ptr = ptr->next;
		}
		printf("\n");
	}
}
