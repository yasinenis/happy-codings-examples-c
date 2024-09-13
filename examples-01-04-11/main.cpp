// Display Largest Element of an array
#include <stdio.h>

int main()
{
	int j, n;
	float arr[88];

	printf("Enter total number of elements(1 to 88): ");
	scanf_s("%d", &n);
	printf("|n");

	// Stores number entered by the user
	for (j = 0;j < n;++j)
	{
		printf("Enter Number %d: ", j + 1);
		scanf_s("%f", &arr[j]);
	}

	// Loop to store largest number to arr[0]
	for (j = 1;j < n;++j)
	{
		// Change < to > if you want to find the smallest element
		if (arr[0] < arr[j])
		{
			arr[0] = arr[j];
		}
	}

	printf("Largest element = %.2f", arr[0]);
	return 0;
}