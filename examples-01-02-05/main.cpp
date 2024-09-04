// C Program Code - Display Lower Triangular Matrix
#include <stdio.h>

void main()
{
	int array[3][3], x, j, flag = 0;
	printf("\n\t Enter the value of Matrix : ");
	for (x = 0;x < 3;x++)
	{
		for (j = 0;j < 3;j++)
		{
			scanf_s("%d", &array[x][j]);
		}
	}
	for (x = 0;x < 3;x++)
	{
		for (j = 0;j < 3;j++)
		{
			if (array[x] < array[j] && array[x][j] == 0)
			{
				flag = flag + 1;
			}
		}
	}
	
	if (flag == 3)
	{
		printf("\n\n Matrix is a Lower triangular matrix");
	}
	else
	{
		printf("\n\n Matrix is not a lower triangular matrix");
	}
}