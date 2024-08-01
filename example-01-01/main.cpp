// Accessing 2-D Array Elements In C Programming
#include <stdio.h>
int main()
{
	int y, x, a[3][3];

	// y: for counting rows
	// x: for counting columns

	for (y = 0;y < 3;y++)
	{
		for (x = 0;x < 3;x++)
		{
			printf("\nEnter the a[%d][%d]=", y, x);
			scanf_s("%d", &a[y][x]);
		}
	}

	// print array elements
	for (y = 0;y < 3;y++)
	{
		for (x = 0;x < 3;x++)
		{
			printf("%d\t", a[y][x]);
		}
		printf("\n");
	}
	return (0);
}