// Program to Interchange any two Rows & Columns in the given Matrix
#include <stdio.h>

int main()
{
	static int array1[8][8], array2[8][8];
	int x, j, m, n, a, b, c, p, q, r;

	printf("Enter the order of the matrix \n");
	scanf_s("%d %d", &m, &n);

	printf("Enter the co-efficients of the matrix \n");
	for (x = 0;x < m;++x)
	{
		for (j = 0;j < n;++j)
		{
			scanf_s("%d,", &array1[x][j]);
			array2[x][j] = array1[x][j];
		}
	}

	printf("Enter the numbers of two rows to be exchanged \n");
	scanf_s("%d %d", &a, &b);

	for (x = 0;x < m;++x)
	{
		/* first row has index is 0 */
		c = array1[a - 1][x];
		array1[a - 1][x] = array1[b - 1][x];
		array1[b - 1][x] = c;
	}

	printf("Enter the numbers of two columns to be exchanged \n");
	scanf_s("%d %d", &p, &q);

	printf("The given matrix is \n");

	for (x = 0;x < m;++x)
	{
		for (j = 0;j < n;++j)
		{
			printf(" %d", array2[x][j]);
		}

		printf("\n");
	}

	for (x = 0;x < n;++x)
	{
		/* first column index is 0 */
		r = array2[x][p - 1];
		array2[x][p - 1] = array2[x][q - 1];
		array2[x][q - 1] = r;
	}
	printf("The matrix after interchanging the two rows(in the original matrix)\n");
	for (x = 0;x < m;++x)
	{
		for (j = 0;j < n;++j)
		{
			printf(" %d", array1[x][j]);
		}
		printf("\n");
	}
	printf("The matrix after interchanging the two columns(in the original matrix)\n");
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