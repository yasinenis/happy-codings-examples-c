// Program to Determine if a given Matrix is a Sparse Matrix
#include <stdio.h>

void main()
{
	static int array[10][10];
	int x, j, m, n;
	int counter = 0;
	printf("Enter the order of the matrix \n");
	scanf_s("%d %d", &m, &n);

	printf("Enter the co-efficients of the matrix \n");
	for (x = 0;x < m;++x)
	{
		for (j = 0;j < n;++j)
		{
			scanf_s("%d", &array[x][j]);
			if (array[x][j] == 0)
			{
				++counter;
			}
		}
	}
	if (counter > ((m * n) / 2))
	{
		printf("The given matrix is sparse matrix \n");
	}
	else
	{
		printf("The given matrix is not a sparse matrix \n");
	}

	printf("There are %d number of zeros", counter);
}