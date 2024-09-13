// Multiply two Matrices by Passing Matrix to a Function
#include <stdio.h>

void enterData(int firstMatrix[][25], int secondMatrix[][25], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
{
	int x, j;
	
	printf("\nEnter elements of matrix 1:\n");
	for (x = 0;x < rowFirst;++x)
	{
		for (j = 0;j < columnFirst;++j)
		{
			printf("Enter elements a%d%d: ", x + 1, j + 1);
			scanf_s("%d", &firstMatrix[x][j]);
		}
	}

	printf("\nEnter elements of matrix 2:\n");
	for (x = 0;x < rowSecond;++x)
	{
		for (j = 0;j < columnSecond;++j)
		{
			printf("Enter elements b%d%d: ", x + 1, j + 1);
			scanf_s("%d", &secondMatrix[x][j]);

		}
	}
}

void multiplyMatrices(int firstMatrix[][25], int secondMatrix[][25], int mult[][25], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
{
	int x, j, k;

	// Initializing elements of matrix mult to 0.
	for (x = 0;x < rowFirst;++x)
	{
		for (j = 0;j < columnSecond;++j)
		{
			mult[x][j] = 0;
		}
	}

	// Multiplying matrix firstMatrix and secondMatrix and storing in array mult.
	for (x = 0;x < rowFirst;++x)
	{
		for (j = 0;j < columnSecond;++j)
		{
			for (k = 0;k < columnFirst;++k)
			{
				mult[x][j] += firstMatrix[x][k] * secondMatrix[k][j];
			}
		}
	}
}

void display(int mult[][25], int rowFirst, int columnSecond)
{
	int x, j;
	printf("\nOutput Matrix:\n");
	for (x = 0;x < rowFirst;++x)
	{
		for (j = 0;j < columnSecond;++j)
		{
			printf("%d ", mult[x][j]);
			if (j == columnSecond - 1)
			{
				printf("\n\n");
			}
		}
	}
}


int main()
{
	int firstMatrix[25][25], secondMatrix[25][25], mult[25][25], rowFirst, columnFirst, rowSecond, columnSecond;
	
	printf("Enter rows and column for first matrix: ");
	scanf_s("%d %d", &rowFirst, &columnFirst);

	printf("Enter rows and column for second matrix: ");
	scanf_s("%d %d", &rowSecond, &columnSecond);

	// If colum of first matrix in not equal to row of second matrix,
	//	asking user to enter the size of matrix again.
	while (columnFirst != rowSecond)
	{
		printf("Error! column of first matrix not equal to row of second.\n");
		printf("Enter rows and column for first matrix: ");
		scanf_s("%d%d", &rowFirst, &columnFirst);

		printf("Enter rows and column for second matrix: ");
		scanf_s("%d%d", &rowSecond, &columnSecond);
	}

	// Function to take matrices data
	enterData(firstMatrix, secondMatrix, rowFirst, columnFirst, rowSecond, columnSecond);

	// Function to multiply two matrices.
	multiplyMatrices(firstMatrix, secondMatrix, mult, rowFirst, columnFirst, rowSecond, columnSecond);

	// Function to display resultant matrix after multiplication.
	display(mult, rowFirst, columnSecond);

	return 0;
}