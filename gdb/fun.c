#include<stdio.h>
void fun1();
void fun2();
void fun1()
{
	int c =10;
	printf("c = %d\n",c);
	fun2();
	return ;
}
int main()
{
	 int a =5;
	 printf("a = %d\n",a);
	 fun1();
	 return 0;
}
void fun2()
{
	int d =20;
	printf("d= %d\n",d);
	return ;
}
