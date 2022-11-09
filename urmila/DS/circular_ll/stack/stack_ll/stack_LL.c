#include"header.c"
int main()
{

	int ch;
	do
	{
		printf("Enter the option\n 1)push 2)pop 3)display 4)exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();
				break;
			case 2:pop();
			       break;
			case 3:display();
			       break;
			case 4: printf("EXIT\n");
				break;
				
			default:printf("option not correct\n");
		}
	}while(ch != 4);
}
