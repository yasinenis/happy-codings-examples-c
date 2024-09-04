// Program to Find the Sum of each Row & each Column of a MxN Matrix
#include <stdio.h>

int main()
{
	static int array[8][8];
	int x, j, m, n, sum = 0;
	
	printf("Enter the order of the matrix\n");
	scanf_s("%d %d", &m, &n);

	printf("Enter the co-efficients of the matrix\n");
	for (x = 0;x < m;++x)
	{
		for (j = 0;j < n;++j)
		{
			scanf_s("%d", &array[x][j]);
		}
	}

	for (x = 0;x < m;++x)
	{
		for (j = 0;j < n;++j)
		{
			sum = sum + array[x][j];
		}

		printf("Sum of the %d row is = %d\n", x, sum);
		sum = 0;
	}

	sum = 0;
	for (j = 0;j < n;++j)
	{
		for (x = 0;x < m;++x)
		{
			sum = sum + array[x][j];
		}

		printf("Sum of the %d column is = %d\n", j, sum);
		sum = 0;
	}
}