// C Programming Code - Simple Two dimensional (2D) Array
#include <stdio.h>

int main()
{
	int disp[2][3];
	int x, j;
	
	for (x = 0;x < 2;x++)
	{
		for (j = 0;j < 3;j++)
		{
			printf("Enter value for disp[%d][%d]:", x, j);
			scanf_s("%d", &disp[x][j]);
		}
	}

	// Displaying array elements 
	printf("Two Dimensional array elements: \n");
	for (x = 0;x < 2;x++)
	{
		for (j = 0;j < 3;j++)
		{
			printf("%d ", disp[x][j]);
			if (j == 2)
			{
				printf("\n");
			}
		}
	}

	return 0;
}