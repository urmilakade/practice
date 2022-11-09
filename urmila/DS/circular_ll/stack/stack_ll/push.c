#include"header.c"		
 struct node *top = 0;
 struct node *last = 0;
void push(void)
{
	struct node * newnode = (struct node*)malloc(sizeof (struct node));
	printf("Enter the data\n");
	scanf("%d",&newnode->data);
	if(top == 0)
	{
		top = newnode;
		newnode->next = newnode;
		last = top;
	}
	else
	{
		newnode->next = top;
		top = newnode;
		last->next = top;
	}
}
