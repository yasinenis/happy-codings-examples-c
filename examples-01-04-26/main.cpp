// Program to find largest array element in C
#include <stdio.h>

int main()
{
	int array[10] = { 4,8,5,3,1,2,6,8,9,0 };
	int loop, largest;

	largest = array[0];

	for (loop = 1;loop < 10;loop++)
	{
		if (largest < array[loop])
		{
			largest = array[loop];
		}
	}
	printf("Largest element of array is %d", largest);

	return 0;
}