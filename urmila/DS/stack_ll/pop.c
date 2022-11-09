#include"header.c"
void pop()
{
	if(top !=0)
	{
		printf("deletd data is %d\n",top->data);	
		top = top->next;
	}
	else
		printf("stack is underflow\n");
}
