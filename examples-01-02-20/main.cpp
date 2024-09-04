// Program to find Smallest Element in Array in C Programming
#include <stdio.h>

int main()
{
	int a[30], j, x, smallest;

	printf("\nEnter no of elements :");
	scanf_s("%d", &x);

	// Read n elements in an array
	for (j = 0;j < x;j++)
	{
		scanf_s("%d", &a[j]);
	}

	// Consider first element as smallest
	smallest = a[0];

	for (j = 0;j < x;j++)
	{
		if (a[j] < smallest)
		{
			smallest = a[j];
		}
	}

	// Print out the Result
	printf("\nSmallest Element: %d", smallest);

	return 0;
}