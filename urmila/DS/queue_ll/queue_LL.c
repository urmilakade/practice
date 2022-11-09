#include"header.c"

 queue *front = 0, *rare = 0;

 int main()
{
	int ch;
	do{
		printf("Entert the option\n1) insert 2) delete 3)display 4)exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insertion();
				break;
			case 2:deletion();
			       break;
			case 3:display();
			       break;
			case 4:printf("EXIT\n");
			       break;
			default:printf("wromg option\n");
		}
	}while(ch != 4);
}
