#include"header.c"
void pop()
{
	node_st * temp = top, *last =top;
	if(top !=0)
	{
		printf("deletd data is %d\n",top->data);
		if(top == top->next)
		{
			free(top);
		 	top = NULL;
		}
		else
		{
			while(top != last->next)
				last = last->next;
	
			top = top->next;
			last->next = top;
			free(temp);
			temp = NULL;
		}	
	}
	else
		printf("stack is underflow\n");
}
