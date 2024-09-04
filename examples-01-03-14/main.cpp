// C Program to Insert an element in an Array
#include <stdio.h>

int main()
{
	int arr[50], element, j, x, location;

	printf("\nEnter no of elements :");
	scanf_s("%d", &j);

	for (x = 0;x < j;x++)
	{
		scanf_s("%d", &arr[x]);
	}

	printf("\nEnter the element to be inserted :");
	scanf_s("%d", &element);

	printf("\nEnter the location");
	scanf_s("%d", &location);

	// Create space at the specified location
	for (x = j;x >= location;x--)
	{
		arr[x] = arr[x - 1];
	}

	j++;
	arr[location - 1] = element;

	// Print out the result of insertion
	for (x = 0;x < j;x++)
	{
		printf("n %d", arr[x]);
	}
	return (0);
}