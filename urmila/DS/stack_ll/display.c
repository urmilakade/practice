#include"header.c"
void display()
{
	if(top == 0){
		printf(" Stack is empty\n");
		return;
	}	
	struct node *ptr = top;
	while( ptr != 0)
	{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
}
