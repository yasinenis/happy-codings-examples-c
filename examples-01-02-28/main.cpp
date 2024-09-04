// Program to Find the Largest Number in an Array
#include <stdio.h>

int main()
{
	int array[100], size, j, largest;

	printf("\n Enter the size of the array: ");
	scanf_s("%d", &size);

	printf("\n Enter %d elements of the array: ", size);
	for (j = 0;j < size;j++)
	{
		scanf_s("%d", &array[j]);
	}

	largest = array[0];
	for (j = 1; j < size;j++)
	{
		if (largest < array[j])
		{
			largest = array[j];
		}
	}

	printf("\n largest element present in the given array is : %d", largest);

	return 0;
}