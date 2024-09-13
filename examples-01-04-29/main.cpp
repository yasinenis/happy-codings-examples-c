// C Programming - find Transpose of Given Square Matrix
#include <stdio.h>
#include <conio.h>

int main()
{
	int arr[25][25], size, x, j, temp;

	printf("\nEnter the size of matrix :");
	scanf_s("%d", &size);

	printf("\nEnter the values a:");
	for (x = 0;x < size;x++)
	{
		for (j = 0;j < size;j++)
		{
			scanf_s("%d", &arr[x][j]);
		}
	}

	printf("\nGiven square matrix is");
	for (x = 0;x < size;x++)
	{
		printf("\n");
		for (j = 0;j < size;j++)
		{
			printf("%d\t", arr[x][j]);
		}
	}

	/* Find transpose */
	for (x = 1;x < size;x++)
	{
		for (j = 0;j < x;j++)
		{
			temp = arr[x][j];
			arr[x][j] = arr[j][x];
			arr[j][x] = temp;
		}
	}

	printf("\nTranspose matrix is :");
	for (x = 0;x < size;x++)
	{
		printf("\n");
		for (j = 0;j < size;j++)
		{
			printf("%d\t", arr[x][j]);
		}
	}

	getch();

	return 0;
}