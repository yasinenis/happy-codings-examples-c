// program code to find upper triangular matrix
#include <stdio.h>

#define maxrows 3
#define maxcols 3

int main()
{
	int array[maxrows][maxcols];
	int row, col, isUpper;

	/* Input elements in matrix from user */
	printf("Enter elements in matrix of size %dx%d: \n", maxrows, maxcols);
	for (row = 0;row < maxrows;row++)
	{
		for (col = 0;col < maxcols;col++)
		{
			scanf_s("%d", &array[row][col]);
		}
	}

	/* Check Upper triangular matrix condition */
	for (row = 0;row < maxrows;row++)
	{
		for (col = 0;col < maxcols;col++)
		{
			/*
			If elements below the main diagonal (col<row)
			is not equal to zero then it is not upper
			triangular matrix
			*/
			if (col < row && array[row][col] != 0)
			{
				isUpper = 0;
			}
		}
	}
	/* Print elements of upper triangular matrix */
	if (isUpper == 1)
	{
		printf("\nThe matrix is Upper triangular matrix.\n");
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
		printf("\nThe matrix is not Upper triangular matrix.");
	}

	return 0;
}

