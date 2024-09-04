// C program to find maximum and minimum element in array
#include <stdio.h>
int main()
{
	int arr[100];
	int j, max, min, size;

	/* Input size of the array */
	printf("Enter size of the array:");
	scanf_s("%d", &size);

	/* Input array elements */
	printf("Enter elements in the array: ");
	for (j = 0;j < size;j++)
	{
		scanf_s("%d", &arr[j]);
	}

	/* Assume first element as maximum and minimum */
	max = arr[0];
	min = arr[0];

	/*
	* Finds maximum and minimum in all array elements. 
	*/
	for (j = 1;j < size;j++)
	{
		/* If current element of array is greater than max */
		if (arr[j] > max)
		{
			max = arr[j];
		}

		/* If current element of array is smaller than min */
		if (arr[j] < min)
		{
			min = arr[j];
		}
	}
	/* Print maximum and minimum element */
	printf("Maximum element = %d\n", max);
	printf("Minimum element = %d", min);

	return 0;

	
}