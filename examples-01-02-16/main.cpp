// C Program to find lower triangular matrix
#include <stdio.h>

#define maxrows 3
#define maxcols 3

int main()
{
	int array[maxrows][maxcols];
	int row, col, isLower;

	/* Input elements in matrix from user */
	printf("Enter elements in matrix of size %dx%d: \n", maxrows, maxcols);
	for (row = 0;row < maxrows;row++)
	{
		for (col = 0;col < maxcols;col++)
		{
			scanf_s("%d", &array[row][col]);
		}
	}

	/* Check whether the matrix is lower triangular matrix */
	isLower = 1;
	for (row = 0;row < maxrows;row++)
	{
		for (col = 0;col < maxcols;col++)
		{
			/*
			* If elements above main diagonal(col>row)
			* is not equal to zero(array[row][col]!=0)
			*/
			if (col > row && array[row][col] != 0)
			{
				isLower = 0;
			}
		}
	}
	/* If matrix is lower triangular matrix */
	if (isLower == 1)
	{
		printf("\nMatrix is Lower triangular matrix: \n");
		/* Print elements of lower triangular matrix */
		for (row = 0;row < maxrows;row++)
		{
			for (col = 0;col < maxcols;col++)
			{
				printf("%d ", array[row][col]);
			}

			printf("\n");
		}
	}
	else
	{
		printf("\nMatrix is not a Lower triangular matrix");
	}
	return 0;
}