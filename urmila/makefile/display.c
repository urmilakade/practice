#include"header.c"
//int  top = -1 ;
void Display(void)
{
	if(top <= -1)
		printf("Stack is empty\n");
	else
	{
		for(int i=0 ; i<= top ;i++)
			printf("%d  ",stack[i]);
		printf("\n");
	}
}

