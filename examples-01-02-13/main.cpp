// Program to Find Inverse Of 3x3 Matrix in 10 Lines
#include <stdio.h>

//      a    3   x   x
void reduction(float a[][6], int size, int pivot, int col)
{
	int x, j;
	float factor;
	factor = a[pivot][col];

	for (x = 0;x < 2 * size;x++)
	{
		a[pivot][x] /= factor;
	}

	for (x = 0;x < size;x++)
	{
		if (x != pivot)
		{
			factor = a[x][col];
			for (j = 0;j < 2 * size;j++)
			{
				a[x][j] = a[x][j] - a[pivot][j] * factor;
			}
		}
	}
}

void main()
{
	float matrix[3][6];
	int x,j;

	// birim matris oluþturdu
	for (x = 0;x < 3;x++)
	{
		for (j = 0;j < 6;j++)
		{
			if (j == x + 3)
			{
				matrix[x][j] = 1;
			}
			else
			{
				matrix[x][j] = 0;
			}
		}
	}

	printf("\nEnter a 3 X 3 Matrix :");
	for (x = 0;x < 3;x++)
	{
		for (j = 0;j < 3;j++)
		{
			scanf_s("%f", &matrix[x][j]);
		}
	}

	for (x = 0;x < 3;x++)
	{
		reduction(matrix, 3, x, x);
	}

	printf("\nInvers Matrix");
	for (x = 0;x < 3;x++)
	{
		printf("\n");
		for (j = 0;j < 3;j++)
		{
			printf("%8.3f", matrix[x][j + 3]);
		}
	}
}