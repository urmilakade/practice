#include"header.c"
int top = -1 ;
void push(void)
{
  if(top >= s-1)
	  printf("Stack is overfull\n");
  else
  {
	  int n;
	  printf("Enter the number\n");
	  scanf("%d",&n);
	  top++;
	  stack[top] = n;
  }
}

