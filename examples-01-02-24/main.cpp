// program to find sum of main diagonal elements of a matrix
#include <stdio.h>

#define SIZE 3 // matrix size

int main()
{
	int A[SIZE][SIZE];
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

	/* Find sum of main diagonal elements */
	for (row = 0;row < SIZE;row++)
	{
		sum = sum + A[row][row];
	}

	printf("\nSum of main diagonal elementss = %d", sum);

	return 0;
}