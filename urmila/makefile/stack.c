#include"header.c"
int main()
{
	printf("Enter the size of stack\n");
	scanf("%d",&s);
	do
	{
		printf("1)PUSH 2)POP 3)DISPLAY 4)EXIT\n");
		printf("\nenter the choice\n");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: Display();
				break;
			case 4:printf("EXIT\n");
			       break;
			default:printf("Incorrect option\n");

		}
	}while(ch != 4);
}

