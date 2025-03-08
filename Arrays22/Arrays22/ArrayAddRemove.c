#include <stdio.h>

int main_onebon()
{
	int arr[5] = { 0 };


	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	for (int i = 0; i < 5; i++)
	{
		printf("%d", arr[i]);


	}

	arr[2] = 0;
	 
	printf("\n\n====================================================\n\n");

	for (int i = 2; i < 4; i++)
	{
		arr[i] = arr[i + 1];

	}

	for (int i = 0; i < 4; i++)
	{
		printf("%d", arr[i]);


	}




	return 0;
}