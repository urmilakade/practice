#include"header.c"

void insertion()
{
	queue * newnode = (queue *)malloc(sizeof(queue));
	
	printf("Enter the data\n");
	scanf("%d",&newnode->data);

	if(front == 0 )
	{
		front = rare  = newnode;
		newnode->next =0;
	}
	else
	{
		newnode->next = rare->next;
		rare->next = newnode;
		rare = newnode;
	}
}
