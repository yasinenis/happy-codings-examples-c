// sort array in ascending or descending order
#include <stdio.h>

#define maxsize 100

int main()
{
	int array[maxsize];
	int size;
	int x, j, temp;

	/* Input size of array */
	printf("Enter elements in array: ");
	scanf_s("%d", &size);

	/* Input elements in array */
	printf("Enter elements in array: ");
	for (x = 0;x < size;x++)
	{
		scanf_s("%d", &array[x]);
	}

	for (x = 0;x < size;x++)
	{
		/* Place the currently selected element array[x] to its correct place. */
		for (j = x + 1;j < size;j++)
		{
			/* Swap if currently selected array element is not at its correct place. */
			if (array[x] > array[j])
			{
				temp = array[x];
				array[x] = array[j];
				array[j] = temp;
			}
		}
	}
	/* Print the sorted array */
	printf("\nElements of array in sorted ascending order: ");
	for (x = 0;x < size;x++)
	{
		printf("%d\t", array[x]);
	}

	return 0;
}