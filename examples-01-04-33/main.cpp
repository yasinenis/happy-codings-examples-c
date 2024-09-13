// Program Code to reverse an array
#include <stdio.h>

#define maxsize 100

int main()
{
	int array[maxsize], reverse[maxsize];
	int size, j, arrIndex, revIndex;

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
	arrIndex = 0;
	while (arrIndex >= 0)
	{
		/* Copy value from original array to reverse array */
		reverse[revIndex] = array[arrIndex];

		revIndex++;
		arrIndex--;
	}

	/* Print the reversed array */
	printf("\nReversed array : ");
	for (j = 0;j < size;j++)
	{
		printf("%d\t", reverse[j]);
	}

	return 0;
}