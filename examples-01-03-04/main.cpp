// Program to Generate Pascal Triangle 1 D Array
#include <stdio.h>

int main()
{
	int array[50], temp[50], x, j, k, l, num; // using 2 arrays

	printf("Enter the number of lines to be printed: ");
	scanf_s("%d", &num);

	temp[0] = 1;
	array[0] = 1;

	for (j = 0;j < num;j++)
	{
		printf(" ");
	}

	printf(" 1\n");
	for (x = 1;x < num;x++)
	{
		for (j = 0;j < x;j++)
		{
			printf(" ");
		}

		for (k = 1;k < num;k++)
		{
			array[k] = temp[k - 1] + temp[k];
		}

		array[x] = 1;

		for (l = 0;l <= x;l++)
		{
			printf("%3d", array[l]);
			temp[l] = array[l];
		}
		printf("\n");
	}
	return 0;
}