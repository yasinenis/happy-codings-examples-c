// Program to reverse an array without using another array
#include <stdio.h>

#define maxsize 100

int main()
{
	int array[maxsize];
	int size, j, arrIndex, revIndex;
	int temp; // used for swapping

	/* Input size of the array */
	printf("Enter size of the array: ");
	scanf_s("%d", &size);

	/* Input array elements */
	printf("Enter elements in array: ");
	for (j = 0;j < size;j++)
	{
		scanf_s("%d", &array[j]);
	}

	revIndex = 0;
	arrIndex = size - 1;
	while (revIndex < arrIndex)
	{
		/* Copy value from original array to reverse array */
		temp = array[revIndex];
		array[revIndex] = array[arrIndex];
		array[arrIndex] = temp;

		revIndex++;
		arrIndex--;
	}

	/* Print the reversed array */
	printf("\nReversed array : ");
	for (j = 0;j < size;j++)
	{
		printf("%d\t", array[j]);
	}

	return 0;
}