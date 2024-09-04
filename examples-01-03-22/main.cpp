// C program to merge two sorted array
#include <stdio.h>

#define maxsize 100

int main()
{
	int array1[maxsize], array2[maxsize], mergeArray[maxsize];
	int size1, size2, mergeSize;
	int index1, index2, mergeIndex;
	int j;

	/* Input size of the array */
	printf("Enter the size of first array : ");
	scanf_s("%d", &size1);

	/* Input elements in the array */
	printf("Enter elements in first array : ");
	for (j = 0;j < size1;j++)
	{
		scanf_s("%d", &array1[j]);
	}

	/* Input size of second array */
	printf("\nEnter the size of second array : ");
	scanf_s("%d", &size2);

	/* Input elements in second array */
	printf("Enter elements in second array : ");
	for (j = 0;j < size2;j++)
	{
		scanf_s("%d", &array2[j]);
	}

	mergeSize = size1 + size2;

	/* Merge two array in ascending order */
	index1 = 0;
	index2 = 0;
	for (mergeIndex = 0;mergeIndex < mergeSize;mergeIndex++)
	{
		/*
		 * If all elements of one array
		 * is merged to final array
		 */
		if (index1 >= size1 || index2 >= size2)
		{
			break;
		}

		if (array1[index1] < array2[index2])
		{
			mergeArray[mergeIndex] = array1[index1];
			index1++;
		}
		else
		{
			mergeArray[mergeIndex] = array2[index2];
			index2++;
		}
	}

	/* Merge the remaining elements of array */
	while (index1 < size1)
	{
		mergeArray[mergeIndex] = array1[index1];
		mergeIndex++;
		index1++;
	}

	while (index2 < size2)
	{
		mergeArray[mergeIndex] = array2[index2];
		mergeIndex++;
		index2++;
	}

	/* Print merged array */
	printf("\nArray merged in ascending order : ");
	for (j = 0;j < mergeSize;j++)
	{
		printf("%d\t", mergeArray[j]);
	}

	return 0;
}