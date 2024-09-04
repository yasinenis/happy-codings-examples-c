// C program to find sum of upper triangular matrix
#include <stdio.h>

#define maxrows 3
#define maxcols 3

int main()
{
	int A[maxrows][maxrows];
	int row, col, sum = 0;

	/* Input elements in matrix from user */
	printf("Enter elements in matrix of size %dx%d: \n", maxrows, maxcols);
	for (row = 0;row < maxrows;row++)
	{
		for (col = 0;col < maxcols;col++)
		{
			scanf_s("%d", &A[row][col]);
		}
	}

	/* Find sum of upper triangular matrix */
	for (row = 0;row < maxrows;row++)
	{
		for (col = 0;col < maxcols;col++)
		{
			if (col > row)
			{
				sum += A[row][col];
			}
		}
	}

	printf("Sum of upper triangular matrix = %d", sum);

	return 0;
}