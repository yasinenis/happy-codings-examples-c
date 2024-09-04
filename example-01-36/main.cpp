// Copy all elements of an array into Another array

#include <stdio.h>

int main()
{
	int array1[50], array2[50], i, j;

	printf("\nEnter no of elements :");
	scanf_s("%d", &j);

	//Accepting values into
	printf("\nEnter the values :");
	for (i = 0;i < j;i++)
	{
		scanf_s("%d", &array1[i]);
	}

	/* Copying data from array 'a' to array 'b' */
	for (i = 0;i < j;i++)
	{
		array2[i] = array1[i];
	}

	// Printing of all elements of array
	printf("The copied array is :");
	for (i = 0;i < j;i++)
	{
		printf("\narray2[%d]=%d", i, array2[i]);
	}
	return (0);
}