// program code to find reverse of an array
#include <stdio.h>

#define maxsize 100

int main()
{
	int array[maxsize];
	int size, j;

	/* Input size of array */
	printf("Enter size of the array: ");
	scanf_s("%d", &size);

	/* Input array elements */
	printf("Enter elements in array: ");
	for (j = 0;j < size;j++)
	{
		scanf_s("%d", &array[j]);
	}

	/*
	* Print array in reversed order
	*/
	printf("\nArray in reverse order: ");
	for (j = size - 1;j >= 0;j--)
	{
		printf("%d\t", array[j]);
	}

	return 0;
}