// Program to Calculate the Addition or Subtraction & Trace of 2 Matrices
#include <stdio.h>

void trace(int arr[][25], int m, int n);

void main()
{
	int array1[25][25], array2[25][25], arraysum[25][25], arraydiff[25][25];

	int x, j, m, n, option;

	printf("Enter the order of the matrix array1 and array2 \n");

	scanf_s("%d %d", &m, &n);

	printf("Enter the elements of matrix array1 \n");

	for (x = 0;x < m;x++)
	{
		for (j = 0;j < n;j++)
		{
			scanf_s("%d", &array1[x][j]);
		}
	}

	printf("MATRIX array1 is \n");

	for (x = 0;x < m;x++)
	{
		for (j = 0;j < n;j++)
		{
			printf("%3d", array1[x][j]);
		}

		printf("\n");
	}

	printf("Enter the elements of matrix array2 \n");

	for (x = 0;x < m;x++)
	{
		for (j = 0;j < n;j++)
		{
			scanf_s("%d", &array2[x][j]);
		}
	}

	printf("MATRIX array2 is\n");

	for (x = 0;x < m;x++)
	{
		for (j = 0;x < n;j++)
		{
			printf("%3d", array2[x][j]);
		}

		printf("\n");
	}

	printf("Enter your option: 1 for Addition and 2 for Subtraction \n");

	scanf_s("%d", &option);

	switch (option)
	{
	case 1:
		for (x = 0;x < m;x++)
		{
			for (j = 0;j < n;j++)
			{
				arraysum[x][j] = array1[x][j] + array2[x][j];
			}
		}

		printf("Sum matrix is \n");

		for (x = 0;x < m;x++)
		{
			for (j = 0;j < n;j++)
			{
				printf("%3d", arraysum[x][j]);
			}

			printf("\n");
		}

		trace(arraysum, m, n);

		break;

	case 2:

		for (x = 0;x < m;x++)
		{
			for (j = 0;j < n;j++)
			{
				arraydiff[x][j] = array1[x][j] - array2[x][j];
			}
		}

		printf("Difference matrix is \n");
		
		for (x = 0;x < m;x++)
		{
			for (j = 0;j < n;j++)
			{
				printf("%3d", arraydiff[x][j]);
			}

			printf("\n");
		}

		trace(arraydiff, m, n);

		break;
	}



}

/* Function to find the trace of a given matrix and print it */
void trace(int arr[][25], int m, int n)
{
	int x, j, trace = 0;

	for (x = 0;x < m;x++)
	{
		for (j = 0;j < n;j++)
		{
			if (x == j)
			{
				trace = trace + arr[x][j];
			}
		}
	}

	printf("Trace of the resultant matrix is = %d\n", trace);
}