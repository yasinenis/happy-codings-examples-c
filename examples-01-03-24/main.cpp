// C Program to Multiply Two 3 X 3 Matrices
#include <stdio.h>

int main()
{
	int a[25][25], b[25][25], c[25][25], x, j, k;
	int sum = 0;

	printf("\nEnter First Matrix : n");
	for (x = 0;x < 3;x++)
	{
		for (j = 0;j < 3;j++)
		{
			scanf_s("%d", &a[x][j]);
		}
	}

	printf("\nEnter Second Matrix : \n");
	for (x = 0;x < 3;x++)
	{
		for (j = 0;j < 3;j++)
		{
			scanf_s("%d", &b[x][j]);
		}
	}

	printf("The First Matrix is: n");
	for (x = 0;x < 3;x++)
	{
		for (j = 0;j < 3;j++)
		{
			printf(" %d ", a[x][j]);
		}
		printf("\n");
	}

	printf("The Second Matrix is: \n");
	for (x = 0;x < 3;x++)
	{
		for (j = 0;j < 3;j++)
		{
			printf(" %d ", b[x][j]);
		}
		printf("\n");
	}

	// Multiplication Logic
	for (x = 0;x <= 2;x++)
	{
		for (j = 0;j <= 2;j++)
		{
			sum = 0;
			for (k = 0;k <= 2;k++)
			{
				sum = sum + a[x][k] * b[k][j];
			}
			c[x][j] = sum;
		}
	}

	printf("\nMultiplication Of Two Matrices : \n");
	for (x = 0;x < 3;x++)
	{
		for (j = 0;j < 3;j++)
		{
			printf(" %d ", c[x][j]);
		}
		printf("\n");
	}
	return 0;
}