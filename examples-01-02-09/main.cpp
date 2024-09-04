// C Program to find addition of Lower Triangular Elements in C Programming
#include <stdio.h>
#include <conio.h>

int main()
{
	int x, j, a[25][25], sum, rows, columns;

	printf("\nEnter the number of Rows: ");
	scanf_s("%d", &rows);

	printf("\nEnter the number of Columns :");
	scanf_s("%d", &columns);

	// Accept the Elements in Matrix
	for (x = 0;x < rows;x++)
	{
		for (j = 0;j < rows;j++)
		{
			printf("\nEnter the Element a[%d][%d]:", x, j);
			scanf_s("%d", &a[x][j]);
		}
	}

	// Addition of all Diagonal Elements
	sum = 0;
	for (x = 0;x < rows;x++)
	{
		for (j = 0;j < columns;j++)
		{
			// Condition for Lower Triangle
			if (x > j)
			{
				sum = sum + a[x][j];
			}
		}
	}

	// Print out the Result
	printf("\nSum of Lower Triangle Elements: %d", sum);
	return (0);
}

/*
 [00][01][02][03]
 (10)[11][12][13]
 (20)(21)[22][23]
 (30)(31)(32)[33]
*/