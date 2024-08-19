// Addition of All Elements in Matrix
#include <stdio.h>
int main()
{
	int y, x, mat[10][10], row, col;
	int sum = 0;

	printf("\nEnter the number of Rows:");
	scanf_s("%d", &row);

	printf("\nEnter the number of Columns:");
	scanf_s("%d", &col);

	// Accept the Elements in Matrix
	for (y = 0;y < row;y++)
	{
		for (x = 0;x < col;x++)
		{
			printf("\nEnter the Element mat[%d][%d]:", y, x);
			scanf_s("%d", &mat[y][x]);
		}
	}

	// Additional of all Elements
	for (y = 0;y < row;y++)
	{
		for (x = 0;x < col;x++)
		{
			sum = sum + mat[y][x];
		}
	}

	// Print out the Result
	printf("\nSum of All Elements in Matrix: %d", sum);
	return(0);
}