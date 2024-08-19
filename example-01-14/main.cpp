// Program to Accept a Matrix of Order MxN & Interchange the Diagonals
#include <stdio.h>
void main()
{
	static int array[10][10];

	int y, x, m, n, a;

	printf("Enter the order of the matrix \n");

	scanf_s("%d %d", &m, &n);

	if (m == n)
	{
		printf("Enter the co-efficients of the matrix\n");

		for (y = 0;y < m;++y)
		{
			for (x = 0;x < n;++x)
			{
				scanf_s("%dx%d", &array[y][x]);
			}
		}

		printf("The given matrix is \n");

		for (y = 0;y < m;++y)
		{
			for (x = 0;x < n;++x)
			{
				printf(" %d", array[y][x]);
			}

			printf("\n");
		}

		for (y = 0;y < m;++y)
		{
			a = array[y][y];
			array[y][y] = array[y][m - y - 1];
			array[y][m - y - 1] = a;
		}

		printf("The matrix after changing the \n");

		printf("main diagonal & secondary diagonal\n");

		for (y = 0;y < m;++y)
		{
			for (x = 0;x < n;++x)
			{
				printf(" %d", array[y][x]);
			}

			printf("\n");
		}
	}

	else
	{
		printf("The given order is not square matrix\n");
	}
}