// program to calculate sum of Upper Triangular Elements in C
#include <stdio.h>
#include <conio.h>
int main()
{
	int y, x, a[10][10], sum, rows, columns;

	printf("\nEnter the number of Rows : ");
	scanf_s("%d", &rows);

	printf("\nEnter the number of Columns : ");
	scanf_s("%d", &columns);

	// Accept the Elements in Matrix
	for (y = 0;y < rows;y++)
	{
		for (x = 0;x < columns;x++)
		{
			printf("\nEnter the Element a[%d][%d] : ", y, x);
			scanf_s("%d", &a[y][x]);
		}
	}

	// Addition of all Diagonal Elements
	sum = 0;
	for (y = 0;y < rows;y++)
	{
		for (x = 0;x < columns;x++)
		{
			// Condition for Upper Triangle
			if (y < x)
			{
				sum = sum + a[y][x];
			}
		}
	}

	// Print out the Result

	printf("\nSum of Upper Triangle Elements : %d", sum);
	return (0);
}