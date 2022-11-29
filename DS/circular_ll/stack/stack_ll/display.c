#include"header.c"
void display()
{
	if(top == 0){
		printf(" Stack is empty\n");
		return;
	}	
	struct node *ptr = top;
	do
	{
		printf("\n\rptr= %p\tdate= %d\tnext= %p",ptr,ptr->data,ptr->next);
		ptr = ptr->next;
	}while( ptr != top);
	printf("\n");
}
