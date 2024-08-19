// C Program to Calculate the Sum & Difference of the Matrices
#include <stdio.h>
#include <stdlib.h>

void readmatA();
void printmatA();
void readmatB();
void printmatB();
void sum();
void diff();

int a[25][25], b[25][25], sumarray[25][25], arraydiff[25][25];
int x, j, row1, column1, row2, column2;

void main()
{
	printf("Enter the order of the matrix A \n");
	scanf_s("%d %d", &row1, &column1);
	
	printf("Enter the order of the matrix B \n");
	scanf_s("%d %d", &row2, &column2);

	if (row1 != row2 && column1 != column2)
	{
		printf("Addition and subtraction are not possible \n");
		exit(1);
	}
	else
	{
		printf("Enter the elements of matrix A \n");

		readmatA();
		printf("MATRIX A is \n");
		printmatA();

		readmatB();
		printf("MATRIX B is \n");
		printmatB();

		sum();
		diff();

	}
}

/* Function to read a matrix A */
void readmatA()
{
	for (x = 0;x < row1;x++)
	{
		for (j = 0;j < column1;j++)
		{
			scanf_s("%d", &a[x][j]);
		}
	}

	return;
}

/* Function to read a matrix B */
void readmatB()
{
	for (x = 0;x < row2;x++)
	{
		for (j = 0;j < column2;j++)
		{
			scanf_s("%d", &b[x][j]);
		}
	}
}

/* Function to print a matrix A */
void printmatA()
{
	for (x = 0;x < row1;x++)
	{
		for (j = 0;j < column1;j++)
		{
			printf("%3d", a[x][j]);
		}
		printf("\n");
	}
}

/* Function to print a matrix B */
void printmatB()
{
	for (x = 0;x < row2;x++)
	{
		for (j = 0;j < column2;j++)
		{
			printf("%3d", b[x][j]);
		}

		printf("\n");
	}
}

/* Function to do the sum of elements of matrix A and Matrix B */
void sum()
{
	for (x = 0;x < row1;x++)
	{
		for (j = 0;j < column2;j++)
		{
			sumarray[x][j] = a[x][j] + b[x][j];
		}
	}

	printf("Sum matrix is \n");

	for (x = 0;x < row1;x++)
	{
		for (j = 0;j < column2;j++)
		{
			printf("%3d", sumarray[x][j]);
		}

		printf("\n");
	}
	return;
}

/* Function to do the difference of elements of matrix A and Matrix B */
void diff()
{
	for (x = 0;x < row1;x++)
	{
		for (j = 0;j < column2;j++)
		{
			arraydiff[x][j] = a[x][j] - b[x][j];
		}
	}

	printf("Difference matrix is \n");

	for (x = 0;x < row1;x++)
	{
		for (j = 0;j < column2;j++)
		{
			printf("%3d", arraydiff[x][j]);
		}

		printf("\n");
	}
	return;
}