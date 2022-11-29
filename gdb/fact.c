#include<stdio.h>
int main()
{
	int n,fact,temp;
       	printf("Enter the number\n");
	scanf("%d",&n);
	temp =n;
	while(n > 0)
	{
	  fact *= n--;
	}
	printf("Factorial 0f %d is %d\n",temp,fact);

}
