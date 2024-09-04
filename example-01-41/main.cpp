// delete all duplicate elements from an array
#include <stdio.h>

#define maxsize 100 

int main()
{
	int array[maxsize];
	int size; // total number of elements in array
	int x, j, k; //loop control variables

	/* Input size of the array */
	printf("Enter size of the array : ");
	scanf_s("%d", &size);

	/* Input elements in the array */
	printf("Enter elements in array : ");
	for (x = 0;x < size;x++)
	{
		scanf_s("%d", &array[x]);
	}

	/*
	* Find all duplicate elements in array
	*/

	for (x = 0;x < size;x++)
	{
		for (j = x + 1;j < size;j++)
		{
			/* If any duplicate found */
			if (array[x] == array[j])
			{
				/* Delete the current duplicate element */
				for (k = j;k < size;k++)
				{
					array[k] = array[k + 1];
				}

				/* Decrement size after removing duplicate element */
				size--;

				/* If shifting of elements occur then don't increment j*/
				j--;
			}
		}
	}

	/*
	*Print array after deleting duplicate elements
	*/
	printf("\nArray elements after deleting duplicates : ");
	for (x = 0;x < size;x++)
	{
		printf("%d\t", array[x]);
	}
	return 0;
}