#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"main.h"

int main()
{
	void (*fp)(void);
	fp=string_compare;
	int var;
	Sp *st;
	st=declaration();
	rand_function(&st);
	print(st);	
	var = access_elements(st);
	printf("Element = %d\n",var);
	if(var%10==0)
		pattern();
	if(var%2==0)
		fp();
	if(var%2!=0)
		acending();

}

