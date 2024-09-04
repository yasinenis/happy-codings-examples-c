// C program code to find transpose of a matrix
#include <stdio.h>

#define maxrows 3
#define maxcols 3

int main()
{
	int A[maxrows][maxcols]; // Original matrix
	int B[maxcols][maxrows]; // Transpose matrix
	int row, col;

	/* Input elements in matrix A from user */
	printf("Enter elements in matrix of size %dx%d: \n", maxrows, maxcols);
	for (row = 0;row < maxrows;row++)
	{
		for (col = 0;col < maxcols;col++)
		{
			scanf_s("%d", &A[row][col]);
		}
	}

	/* Find transpose of matrix A */
	for (row = 0;row < maxrows;row++)
	{
		for (col = 0;col < maxcols;col++)
		{
			/* Store each row of matrix A to each column of matrix B */
			B[col][row] = A[row][col];
		}
		printf("\n");
	}

	/* Print the transpose of matrix A */
	printf("Transpose of matrix A: \n");
	for (row = 0;row < maxcols;row++)
	{
		for (col = 0;col < maxrows;col++)
		{
			printf("%d ", B[row][col]);
		}
		printf("\n");
	}
	return 0;
}