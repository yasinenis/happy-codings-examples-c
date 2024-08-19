// C program for addition of two matrices in C
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int y, x, mat1[8][8], mat2[8][8], mat3[8][8];
	int row1, col1, row2, col2;

	printf("\nEnter the number of Rows of Mat1 : ");
	scanf_s("%d", &row1);
	printf("\nEnter the number of Cols of Mat1 : ");
	scanf_s("%d", &col1);

	printf("\nEnter the number of Rows of Mat2 : ");
	scanf_s("%d", &row2);
	printf("\nEnter the number of Columns of Mat2 : ");
	scanf_s("%d", &col2);

	/* Before accepting the Elements Check if no of rows and columns of both matrices is equal */
	if (row1 != row2 || col1 != col2)
	{
		printf("\nOrder of two matrices is not same ");
		exit(0);
	}

	// Accept the Elements in Matrix1
	for (y = 0;y < row1;y++)
	{
		for (x = 0;x < col1;x++)
		{
			printf("Enter the Element a[%d][%d]: ", y, x);
			scanf_s("%d", &mat1[y][x]);
		}
	}

	// Accept the Elements in Matrix 2
	for (y = 0;y < row2;y++)
	{
		for (x = 0;x < col2;x++)
		{
			printf("Enter the Element b[%d][%d] : ", y, x);
			scanf_s("%d", &mat2[y][x]);
		}
	}

	// Addition of two matrices
	for (y = 0;y < row1;y++)
	{
		for (x = 0;x < col1;x++)
		{
			mat3[y][x] = mat1[y][x] + mat2[y][x];
		}
	}

	// Print out the Resultant Matrix
	printf("\nThe Addition of two Matrices is : ");
	for (y = 0;y < row1;y++)
	{
		for (x = 0;x < col1;x++)
		{
			printf("%d\t", mat3[y][x]);
		}
		printf("\n");
	}
	return 0;
}