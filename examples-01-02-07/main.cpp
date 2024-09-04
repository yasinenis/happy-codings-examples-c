// C Program to evalueate Subtraction of two matrices ( matrix ) in C
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, j, mat1[25][25], mat2[25][25], mat3[25][25];
	int row1, col1, row2, col2;

	printf("\nEnter the number of Rows of Mat1 :");
	scanf_s("%d", &row1);
	printf("\nEnter the number of Cols of Mat1 :");
	scanf_s("%d", &col1);

	printf("\nEnter the number of Rows of Math2 :");
	scanf_s("%d", &row2);
	printf("\nEnter the number of Columns of Mat2 :");
	scanf_s("%d", &col2);

	/* Before accepting the Elements Check if no of rows and columns of both matrices is equal */
	if (row1 != row2 || col1 != col2)
	{
		printf("\nOrder of two matrices is not same ");
		exit(0);
	}

	// Accept the Elements in Matrix 1
	for (x = 0;x < row1;x++)
	{
		for (j = 0;j < col1;j++)
		{
			printf("Enter the Element a[%d][%d]:", x, j);
			scanf_s("%d", &mat1[x][j]);
		}
	}

	// Accept the Elements in Matrix 2
	for (x = 0;x < row2;x++)
	{
		for (j = 0;j < col2;j++)
		{
			printf("Enter the Element b[%d][%d]:", x, j);
			scanf_s("%d", &mat2[x][j]);
		}

		// Subtraction of two matrices
		for (x = 0;x < row1;x++)
		{
			for (j = 0;j < col1;j++)
			{
				mat3[x][j] = mat1[x][j] - mat2[x][j];
			}
		}

		// Print out the Resultant Matrix
		printf("\nThe Subtraction of two Matrices is: \n");
		for (x = 0;x < row1;x++)
		{
			for (j = 0;j < col1;j++)
			{
				printf("%d\t", mat3[x][j]);
			}
		}
		printf("\n");
	}
	return 0;
} 