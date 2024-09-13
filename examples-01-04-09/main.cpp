// C program to subtract two matrices
#include <stdio.h>

#define SIZE 3

int main()
{
	int A[SIZE][SIZE];
	int B[SIZE][SIZE];
	int C[SIZE][SIZE];

	int row, col;

	/* Input elements in first matrix */
	printf("Enter elements in matrix A of size 3x3: \n");
	for (row = 0;row < SIZE;row++)
	{
		for (col = 0;col < SIZE;col++)
		{
			scanf_s("%d", &A[row][col]);
		}
	}

	/* Input elements in second matrix */
	printf("Enter elements in matrix B of size 3x3: \n");
	for (row = 0;row < SIZE;row++)
	{
		for (col = 0;col < SIZE;col++)
		{
			scanf_s("%d", &A[row][col]);
		}
	}

	/* Subtract both matrices and store the result in matrix C */
	for (row = 0;row < SIZE;row++)
	{
		for (col = 0;col < SIZE;col++)
		{
			/* Cij = Aij - Bij */
			C[row][col] = A[row][col] - B[row][col];
		}
	}

	/* Print difference of both matrices A and B */
	printf("\nDifference of two matrices A-B = \n");
	for (row = 0;row < SIZE;row++)
	{
		for (col = 0;col < SIZE;col++)
		{
			printf("%d ", C[row][col]);
		}
		printf("\n");
	}
	return 0;
}