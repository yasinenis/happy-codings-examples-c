// Program to Calculate the Sum of the Elements of each Row & Column
#include <stdio.h>

int Addrow(int array1[25][25], int k, int c);
int Addcol(int array1[25][25], int k, int r);
void main()
{
	int arr[25][25];
	int x, j, row, col, rowsum, colsum, sumall = 0;
	
	printf("Enter the order of the matrix \n");
	scanf_s("%d %d", &row, &col);
	
	printf("Enter the elements of the matrix \n");
	for (x = 0;x < row;x++)
	{
		for (j = 0;j < col;j++)
		{
			scanf_s("%d", &arr[x][j]);
		}
	}

	printf("Input matrix is \n");

	for (x = 0;x < row;x++)
	{
		for (j = 0;j < col;j++)
		{
			printf("%3d", arr[x][j]);
		}

		printf("\n");
	}

	/* computing row sum */

	for (x = 0;x < row;x++)
	{
		rowsum = Addrow(arr, x, col);

		printf("Sum of row %d = %d\n", x + 1, rowsum);
	}

	/* computing col sum */

	for (j = 0;j < col;j++)
	{
		colsum = Addcol(arr, j, row);

		printf("Sum of column %d = %d\n", j + 1, colsum);
	}

	/* computation of all elements */
	for (j = 0;j < row;j++)
	{
		sumall = sumall + Addrow(arr, j, col);
	}

	printf("Sum of all elements of matrix = %d\n", sumall);
}

/* Function to add each row */

int Addrow(int array1[25][25], int k, int c)
{
	int rsum = 0, x;

	for (x = 0;x < c;x++)
	{
		rsum = rsum + array1[k][x];
	}

	return(rsum);
}

/* Function to add each column */
int Addcol(int array1[25][25], int k, int r)
{
	int csum = 0, j;

	for (j = 0;j < r;j++)
	{
		csum = csum + array1[j][k];
	}

	return(csum);
}