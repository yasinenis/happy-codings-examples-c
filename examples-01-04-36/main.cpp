// C Programming - Second largest array element in C
#include <stdio.h>

int main()
{
	int array[10] = { 88,13,8,4,53,69,8,44,9,0 };
	int loop, largest, second;

	if (array[0] > array[1])
	{
		largest = array[0];
		second = array[1];
	}
	else
	{
		largest = array[1];
		second = array[0];
	}

	for (loop = 2;loop < 10;loop++)
	{
		if (largest < array[loop])
		{
			second = largest;
			largest = array[loop];
		}
		else if (second < array[loop])
		{
			second = array[loop];
		}
	}

	printf("Largest - %d \nSecond - %d \n", largest, second);

	return 0;
}