// Program to find smallest array element in C
#include <stdio.h>

int main()
{
	int array[10] = { 2,4,3,5,8,2,6,8,9,0 };
	int loop, smallest;

	smallest = array[0];

	for (loop = 1;loop < 10;loop++)
	{
		if (smallest > array[loop])
		{
			smallest = array[loop];
		}
	}

	printf("Smallest element of array is %d", smallest);

	return 0;
}