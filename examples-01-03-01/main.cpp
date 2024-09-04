// C Program to Find Transpose of a Matrix
#include <stdio.h>

int main()
{
	int a[10][10], transpose[10][10], r, c, x, j;
	
	printf("Enter rows and columns of matrix: ");
	scanf_s("%d %d", &r, &c);

	// Storing elements of the matrix
	printf("\nEnter elements of matrix:\n");
	for (x = 0;x < r;++x)
	{
		for (j = 0;j < c;++j)
		{
			printf("Enter element a%d%d: ", x + 1, j + 1);
			scanf_s("%d", &a[x][j]);
		}
	}

	/* Displaying the matrix a[][] */
	printf("\nEntered Matrix: \n");
	for (x = 0;x < r;++x)
	{
		for (j = 0;j < c;++j)
		{
			printf("%d ", a[x][j]);
			if (j == c - 1)
			{
				printf("\n\n");
			}
		}
	}

	// Finding the transpose of matrix a
	for (x = 0;x < r;++x)
	{
		for (j = 0;j < c;++j)
		{
			transpose[j][x] = a[x][j];
		}
	}

	// Displaying the transpose of matrix a
	printf("\nTranspose of Matrix:\n");
	for (x = 0;x < c;++x)
	{
		for (j = 0;j < r;++j)
		{
			printf("%d ", transpose[x][j]);
			if (j == r - 1)
			{
				printf("\n\n");
			}
		}
	}

	return 0;

}