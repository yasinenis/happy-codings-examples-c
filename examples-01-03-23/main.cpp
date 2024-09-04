// Program to Multiply two Matrix Using Multi-dimensional Arrays
#include <stdio.h>

int main()
{
	int a[25][25], b[25][25], result[25][25], r1, c1, r2, c2, x, j, k;

	printf("Enter rows and column for first matrix: ");
	scanf_s("%d %d", &r1, &c1);

	printf("Enter rows and column for second matrix: ");
	scanf_s("%d %d", &r2, &c2);

	// Column of first matrix should be equal to column of second matrix and
	while (c1 != r2)
	{
		printf("Error! column of first matrix not equal to row of second.\n\n");
		
		printf("Enter rows and column for first matrix: ");
		scanf_s("%d %d", &r1, &c1);

		printf("Enter rows and column for second matrix: ");
		scanf_s("%d %d", &r2, &c2);
	}

	// Storing elements of first matrix.
	printf("\nEnter elements of matrix 1:\n");
	for (x = 0;x < r1;++x)
	{
		for (j = 0;j < c1;++j)
		{
			printf("Enter elements a%d%d: ", x + 1, j + 1);
			scanf_s("%d", &a[x][j]);
		}
		
	}
	
	// Storing elements of second matrix.
	printf("\nEnter elements of matrix 2:\n");
	for (x = 0;x < r2;++x)
	{
		for (j = 0;j < c2;++j)
		{
			printf("Enter elements b%d%d: ", x + 1, j + 1);
			scanf_s("%d", &b[x][j]);
		}
	}

	// Initializing all elements of result matrix to 0
	for (x = 0;x < r1;++x)
	{
		for (j = 0;j < c2;++j)
		{
			result[x][j] = 0;
		}
	}

	// Multiplying matrices a and b and storing result in result matrix
	for (x = 0;x < r1;++x)
	{
		for (j = 0;j < c2;++j)
		{
			for (k = 0;k < c1;++k)
			{
				result[x][j] += a[x][k] * b[k][j];
			}
		}
	}

	// Displaying the result
	printf("\nOutput Matrix:\n");
	for (x = 0;x < r1;++x)
	{
		for (j = 0;j < c2;++j)
		{
			printf("%d ", result[x][j]);
			if (j == c2 - 1)
			{
				printf("\n\n");
			}
		} 
	}
	return 0;
}