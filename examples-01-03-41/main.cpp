// Reversing Array Elements in C Programming
#include <stdio.h>

int main()
{
	int arr[30], x, j, num, temp;

	printf("\nEnter no of elements : ");
	scanf_s("%d", &num);

	// Read elements in an array
	for (x = 0;x < num;x++)
	{
		scanf_s("%d", &arr[x]);
	}

	j = x - 1; // j will point to last Element
	x = 0;  // x point to first element

	while (x < j)
	{
		temp = arr[x];
		arr[x] = arr[j];
		arr[j] = temp;
		x++;  // increment x
		j--; // decrement j
	}

	// Print out the Result of Insertion
	printf("\nResult after reversal : ");
	for (x = 0;x < num;x++)
	{
		printf("%d \t", arr[x]);
	}

	return 0;
}