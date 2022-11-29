#include<stdio.h>

int main()
{
	int i,j,s,temp;

	printf("Enter the size of array\n");
	scanf("%d",&s);
	int arr[s];
	
	printf("Enter the %d elemrnt of array\n",s);
	for(i =0 ; i<s ; i++)
		scanf("%d",arr+i);

	printf("the array element are: ");
	for(i =0 ; i<s ; i++)
		printf("%d ",arr[i]);
	printf("\n");

	for(j =0; j< s-1; j++)
	{
		for(i = 0; i<s-1-j; i++)
		{	
			if(arr[i] > arr[i+1])
			{
				temp = arr[i];
				arr[i] =arr[i+1];
				arr[i+1] = temp;
			}
		}
	}
       	printf("Array after implementing bubble sort: ");
	for(i =0 ; i<s ; i++)
		printf("%d ",arr[i]);
	printf("\n");

}
