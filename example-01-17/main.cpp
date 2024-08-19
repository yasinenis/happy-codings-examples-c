// C Program to Add Two Matrix Using Multi-dimensional Arrays
#include <stdio.h>
int main()
{
	int r, c, a[88][88], b[88][88], sum[88][88], y, x;

	printf("Enter number of rows (between 1 and 88): ");
	scanf_s("%d", &r);
	printf("Enter number of columns (between 1 and 88): ");
	scanf_s("%d", &c);

	printf("\nEnter elements of 1st matrix:\n");

	for (y = 0;y < r;++y)
	{
		for (x = 0;x < c;++x)
		{
			printf("Enter element a%d%d: ", y + 1, x + 1);
			scanf_s("%d", &a[y][x]);
		}
	}

	printf("Enter elements of 2nd matrix:\n");
	for (y = 0;y < r;++y)
	{
		for (x = 0;x < c;++x)
		{
			printf("Enter element a%d%d: ", y + 1, x + 1);
			scanf_s("%d", &b[y][x]);
		}
	}

	// Adding Two matrices

	for (y = 0;y < r;++y)
	{
		for (x = 0;x < c;++x)
		{
			sum[y][x] = a[y][x] + b[y][x];
		}
	}

	// Displaying the result
	printf("\nSum of two matrix is: \n\n");

	for (y = 0;y < r;++y)
	{
		for (x = 0;x < c;++x)
		{
			printf("%d ", sum[y][x]);

			if (x == c - 1)
			{
				printf("\n\n");
			}
		}
	}

	return 0;
}