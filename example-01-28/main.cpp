// Program to Check if a given Matrix is an Identity Matrix
#include <stdio.h>

void main()
{
	int a[25][25];
	int x, j, row, column, flag = 1;

	printf("Enter the order of the matrix A \n");
	scanf_s("%d %d", &row, &column);
	printf("Enter the elements of matrix A\n");

	for (x = 0;x < row;x++)
	{
		for (j = 0;j < column;j++)
		{
			scanf_s("%d", &a[x][j]);
		}
	}

	printf("MATRIX A is \n");
	for (x = 0;x < row;x++)
	{
		for (j = 0;j < column;j++)
		{
			printf("%3d", a[x][j]);
		}

		printf("\n");
	}

	/* Check for unit (or identity) matrix */
	for (x = 0;x < row;x++)
	{
		for (j = 0;j < column;j++)
		{
			if ((x==j && a[x][j] != 1) || (x != j && a[j][x] != 0))
			{
				flag = 0;
				break;
			}
		}
	}

	if (flag == 1)
	{
		printf("It is identity matrix \n");
	}
	else
	{
		printf("It is not a identity matrix \n");
	}
}