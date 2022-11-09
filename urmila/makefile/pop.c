#include"header.c"
//int  top = -1 ;
void pop()
{
	if(top <= -1)
		printf("stack is underflow\n");
	else
	{
		printf("Deleted elemnt is %d\n",stack[top]);
		top--;
	}
}

