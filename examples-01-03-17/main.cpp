// C program to interchange diagonals of a matrix
#include <stdio.h>

#define maxrows 3
#define maxcols 5

int main()
{
	int A[maxrows][maxcols];
	int row, col, size, temp;

	/* Input elements in matrix form user */
	printf("Enter elements in matrix of size %dx%d: \n", maxrows, maxcols);
	for (row = 0;row < maxrows;row++)
	{
		for (col = 0;col < maxcols;col++)
		{
			scanf_s("%d", &A[row][col]);
		}
	}

	size = (maxrows < maxcols) ? maxrows : maxcols;

	/* print matrix before */
	printf("\nMatrix before : \n");
	for (row = 0;row < maxrows;row++)
	{
		for (col = 0;col < maxcols;col++)
		{
			printf("%d ", A[row][col]);
		}
		printf("\n");
	}

	/* Interchange diagonal of the matrix */
	for (row = 0;row < size;row++)
	{
		col = row;

		temp = A[row][col];
		A[row][col] = A[row][(size - col) - 1];
		A[row][(size - col) - 1] = temp;
	}

	/* Print the interchanged diagonal matrix */
	printf("\nMatrix after diagonals interchanged: \n");
	for (row = 0;row < maxrows;row++)
	{
		for (col = 0;col < maxcols;col++)
		{
			printf("%d ", A[row][col]);
		}

		printf("\n");
	}
	return 0;
}