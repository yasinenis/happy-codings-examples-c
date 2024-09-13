// Program to find sum of array elements 
#include <stdio.h>

#define maxsize 100

int main()
{
	int arr[maxsize];
	int j, n, sum = 0;

	/* Input size of the array */
	printf("Enter size of the array: ");
	scanf_s("%d", &n);

	/* Input elements in array */
	printf("Enter %d elements in the array: ", n);
	for (j = 0;j < n;j++)
	{
		scanf_s("%d", &arr[j]);

		// Adds each element of array to sum
		sum += arr[j];
	}

	printf("Sum of all elements of array = %d", sum);

	return 0;
}