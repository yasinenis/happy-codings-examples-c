// program to perform Scalar matrix multiplication
#include <stdio.h>

#define SIZE 3

int main()
{
	int A[SIZE][SIZE];
	int x, row, col;

	/* Input elements in matrix from user */
	printf("Enter elements in matrix of size %dx%d: \n", SIZE, SIZE);
	for (row = 0;row < SIZE;row++)
	{
		for (col = 0;col < SIZE;col++)
		{
			scanf_s("%d", &A[row][col]);
		}
	}

	/* Input multiplier from user */
	printf("Enter any number to multiply with matrix A: ");
	scanf_s("%d", &x);

	/* Perform scalar multiplication of matrix */
	for (row = 0;row < SIZE;row++)
	{
		for (col = 0;col < SIZE;col++)
		{
			/* (cAij) = c.Aij */
			A[row][col] = x * A[row][col];
		}
	}

	/* Print result of scalar multiplication of matrix */
	printf("\nResultant matrix c.A=\n");
	for (row = 0;row < SIZE;row++)
	{
		for (col = 0;col < SIZE;col++)
		{
			printf("%d ", A[row][col]);
		}
		printf("\n");
	}
	return 0;
}