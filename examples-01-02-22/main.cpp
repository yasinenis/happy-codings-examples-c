// find sum of each row and columns of a matrix
#include <stdio.h>

#define SIZE 3

int main()
{
	int A[SIZE][SIZE];
	int row, col, sum = 0;

	/* Input elements in matrix from user */
	printf("Enter elements in matrix of size %dx%d: \n", SIZE, SIZE);
	int row, col, sum = 0;

	/* Input elements in matrix from user */
	printf("Enter elements in matrix of size %dx%d: \n", SIZE, SIZE);
	for (row = 0;row < SIZE;row++)
	{
		for (col = 0;col < SIZE;col++)
		{
			scanf_s("%d", &A[row][col]);
		}
	}

	/* Calculate sum of elements of each row of matrix */
	for (row = 0;row < SIZE;row++)
	{
		sum = 0;
		for (col = 0;col < SIZE;col++)
		{
			sum += A[row][col];
		}

		printf("Sum of elements of Row Td %d = %d\n", row + 1, sum);
	}

	/* Find sum of elements of each columns of matrix */
	for (row = 0;row < SIZE;row++)
	{
		sum = 0;
		for (col = 0;col < SIZE;col++)
		{
			sum += A[col][row];
		}

		printf("Sum of elements of Column %d = %d\n", row + 1, sum);
	}

	return 0;
}