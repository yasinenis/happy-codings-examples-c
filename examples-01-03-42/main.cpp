// C program to right rotate an array
#include <stdio.h>

#define SIZE 10 

void printArray(int arr[]);
void rotateByOne(int arr[]);

int main()
{
	int j, N;
	int arr[SIZE];

	printf("Enter 10 elements array: ");
	for (j = 0;j < SIZE;j++)
	{
		scanf_s("%d", &arr[j]);
	}

	printf("Enter number of times to right rotate: ");
	scanf_s("%d", &N);

	/* Actual rotation */
	N = N % SIZE;

	/* Print array before rotation */
	printf("Array before rotation");
	printArray(arr);

	/* Rotate array n times */
	for (j = 1;j <= N;j++)
	{
		rotateByOne(arr);
	}

	/* Print array after rotation */
	printf("\n\nArray after rotation\n");
	printArray(arr);

	return 0;
}

void rotateByOne(int arr[])
{
	int j, last;

	/* Store last element of array */
	last = arr[SIZE - 1];

	for (j = SIZE - 1;j > 0;j--)
	{
		/* Move each array element to its right */
		arr[j] = arr[j - 1];
	}

	/* Copy last element of array to first */
	arr[0] = last;
}


/* Print the given array */
void printArray(int arr[])
{
	int j;

	for (j = 0;j < SIZE;j++)
	{
		printf("%d ", arr[j]);
	}
}