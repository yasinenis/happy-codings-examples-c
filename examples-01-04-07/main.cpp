// Sort Rows of the Matrix in Ascending & Columns in Descending Order
#include <stdio.h>

int main()
{
	static int array1[25][25], array2[25][25];
	int x, j, k, a, n, m;

	printf("Enter the order of the matrix \n");
	scanf_s("%d %d", &m, &n);

	printf("Enter co-efficients of the matrix \n");
	for (x = 0;x < m;++x)
	{
		for (j = 0;j < n;++j)
		{
			scanf_s("%d", &array1[x][j]);
			array2[x][j] = array1[x][j];
		}
	}

	printf("The given matrix is \n");
	for (x = 0;x < m;++x)
	{
		for (j = 0;j < n;++j)
		{
			printf(" %d", array1[x][j]);
		}
		printf("\n");
	}

	printf("After arranging rows in ascending order\n");
	for (x = 0;x < m;++x)
	{
		for (j = 0;j < n;++j)
		{
			for (k = (j + 1);k < n;++k)
			{
				if (array1[x][j] > array1[x][k])
				{
					a = array1[x][j];
					array1[x][j] = array1[x][k];
					array1[x][k] = a;
				}
			}
		}
	}
	
	for (x = 0;x < m;++x)
	{
		for (j = 0;j < n;++j)
		{
			printf(" %d", array1[x][j]);
		}

		printf("\n");
	}

	printf("After arranging the columns in descending order \n");
	for (j = 0;j < n;++j)
	{
		for (x = 0;x < m;++x)
		{
			for (k = x + 1;k < m;++k)
			{
				if (array2[x][j] < array2[k][j])
				{
					a = array2[x][j];
					array2[x][j] = array2[k][j];
					array2[k][j] = a;
				}
			}
		}
	}

	for (x = 0;x < m;++x)
	{
		for (j = 0;j < n;++j)
		{
			printf(" %d", array2[x][j]);
		}

		printf("\n");
	}
	return 0;
}