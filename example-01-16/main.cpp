// C program to add two matrices
#include <stdio.h>

#define SIZE 3 // Size of the matrix

int main()
{
	int M1[SIZE][SIZE]; // Matrix 1
	int M2[SIZE][SIZE]; // Matrix 2
	int M3[SIZE][SIZE]; // Resultant matrix

	int row, col;

	/* Input elements in first matrix */
	printf("Enter elements in matrix M1 of size 3x3: \n");
	for (row = 0;row < SIZE;row++)
	{
		for (col = 0;col < SIZE;col++)
		{
			scanf_s("%d", &M1[row][col]);
		}
	}

	/* Input elements in second matrix */
	printf("\nEnter elements in matrix M2 of size 3x3: \n");
	for (row = 0;row < SIZE;row++)
	{
		for (col = 0;col < SIZE;col++)
		{
			scanf_s("%d", &M2[row][col]);
		}
	}

	/* 
	Add both matrices M1 and M2 entry wise or element wise and 
	stores result in matrix M3 
	*/

	for (row = 0;row < SIZE;row++)
	{
		for (col = 0;col < SIZE;col++)
		{
			/* M3ij = M1ij + M2ij */
			M3[row][col] = M1[row][col] + M2[row][col];
		}
	}

	/* Print the value of resultant matrix M3 */
	printf("\nSum of matrices M1+M2 = \n");
	for (row = 0;row < SIZE;row++)
	{
		for (col = 0;col < SIZE;col++)
		{
			printf("%d ",M3[row][col]);
		}
		printf("\n");
	}
	return 0;
}