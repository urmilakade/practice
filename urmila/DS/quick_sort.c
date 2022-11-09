#include<stdio.h>
int main()
{
	int arr[6] ={6,3,7,2,4,5};
	int pivot ,last,first,i= 0;

	first =0;
	last = 5;
	while(last != 0)
	{
		pivot = arr[last];
		while(first <= last)
		{
			if(arr[first] > pivot)
			{
				int temp = arr[first];
				arr[first] = arr[last];
				arr[last] = temp;
				last --;
			}
			first++;
		}
	}
	for(i = 0; i< 6; i++)
	printf("%d ",arr[i]);
	printf("\n");
}
