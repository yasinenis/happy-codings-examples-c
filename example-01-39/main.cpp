// count frequency of each element in an array
#include <stdio.h>

int main()
{
	int array[100], freq[100];
	int size, x, j, count;

	/* Input size of array */
	printf("Enter size of array: ");
	scanf_s("%d", &size);

	/* Input elements in array */
	printf("Enter elements in array: ");
	for (x = 0;x < size;x++)
	{
		scanf_s("%d", &array[x]);

		/* Initially initialize frequencies to -1 */
		freq[x] = -1;
	}
	for (x = 0;x < size;x++)
	{
		count = 1;
		for (j = x + 1;j < size;j++)
		{
			/* If duplicate element is found */
			if (array[x] == array[j])
			{
				count++;

				/* Make sure not to count frequency of same element again */
				freq[j] = 0;
			}
		}

		/* If frequency of current element is not counted */
		if (freq[x] != 0)
		{
			freq[x] = count;
		}
	}

	/*
	* Print frequency of each element
	*/

	printf("\nFrequency of all elements of array : \n");
	for (x = 0;x < size;x++)
	{
		if (freq[x] != 0)
		{
			printf("%d occurs %d times\n", array[x], freq[x]);
		}
	}
	return 0;

}