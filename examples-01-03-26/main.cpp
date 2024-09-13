// program code to multiply two matrices
#include <stdio.h>

#define SIZE 3

int main()
{
	int A[SIZE][SIZE];
	int B[SIZE][SIZE];
	int C[SIZE][SIZE];
	int row, col, j, sum;

	/* Input elements in first matrix from user */
	printf("Enter elements in matrix A of size %dx%d: \n", SIZE, SIZE);
	for (row = 0;row < SIZE;row++)
	{
		for (col = 0;col < SIZE;col++)
		{
			scanf_s("%d", &A[row][col]);
		}
	}

	/* Input elements in second matrix from user */
	printf("\nEnter elements in matrix B of size %dx%d: \n", SIZE, SIZE);
	for (row = 0;row < SIZE;row++)
	{
		for (col = 0;col < SIZE;col++)
		{
			scanf_s("%d", &B[row][col]);
		}
	}

	/* Multiply both matrices A*B */
	for (row = 0;row < SIZE;row++)
	{
		for (col = 0;col < SIZE;col++)
		{
			sum = 0;
			/* Multiply row of first matrix to column of second matrix and store sum of product of elements in sum */
			for (j = 0;j < SIZE;j++)
			{
				sum += A[row][j] * B[j][col];
			}

			C[row][col] = sum;
		}
	}

	/* Print product of the matrices */
	printf("\nProduct of matrix A * B = \n");
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