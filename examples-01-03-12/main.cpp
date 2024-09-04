// program to input and print elements in array
#include <stdio.h>

#define maxsize 1000

int main()
{
	int arr[maxsize];
	int j, N;

	/* Input array size */
	printf("Enter size of array: ");
	scanf_s("%d", &N);

	/* Input elements in array */
	printf("Enter %d elements in the array : ", N);
	for (j = 0;j < N;j++)
	{
		scanf_s("%d", &arr[j]);
	}

	/* Print all elements of array */
	printf("\nElements in array are: ");
	for (j = 0;j < N;j++)
	{
		printf("%d,", arr[j]);
	}

	return 0;
}