// C Program to Find the Transpose of a given Matrix
#include <stdio.h>

void main()
{
	static int array[8][8];
	int x, j, m, n;
	
	printf("Enter the order of the matrix \n");
	scanf_s("%d %d", &m, &n);

	printf("Enter the coeficients of the matrix\n");
	for (x = 0;x < m;++x)
	{
		for (j = 0;j < n;++j)
		{
			scanf_s("%d", &array[x][j]);
		}
	}

	printf("The given matrix is \n");
	for (x = 0;x < m;++x)
	{
		for (j = 0;x < n;++j)
		{
			printf(" %d", array[x][j]);
		}

		printf("\n");
	}

	printf("Transpose of matrix is \n");
	for (j = 0;j < n;++j)
	{
		for (x = 0;x < m;++x)
		{
			printf(" %d", array[x][j]);
		}

		printf("\n");
	}
}