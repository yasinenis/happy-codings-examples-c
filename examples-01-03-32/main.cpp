// Program code to Print Array Elements 
#include <stdio.h>

int main()
{
	int x, arr[100], j;

	printf("\nEnter no of elements : ");
	scanf_s("%d", &j);

	// Reading values into Array
	printf("\nEnter the values :");
	for (x = 0;x < j;x++)
	{
		scanf_s("%d", &arr[x]);
	}

	// Printing of all elements of array
	for (x = 0;x < j;x++)
	{
		printf("\narr[%d] = %d", x, arr[x]);
	}
	return 0;
}