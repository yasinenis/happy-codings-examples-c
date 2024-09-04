// Find the Frequency of Odd & Even Numbers in the given Matrix
#include <stdio.h>

int main()
{
	static int array[8][8];
	int x, j, m, n, even = 0, odd = 0;
	
	printf("Enter the order of the matrix\n");
	scanf_s("%d %d", &m, &n);

	printf("Enter the coefficients of matrix \n");
	for (x = 0;x < m;++x)
	{
		for (j = 0;j < n;++j)
		{
			scanf_s("%d", &array[x][j]);

			if (array[x][j] % 2 == 0)
			{
				++even;
			}
			else
			{
				++odd;
			}
		}
	}

	printf("The given matrix is \n");
	for (x = 0;x < m;++x)
	{
		for (j = 0;j < n;++j)
		{
			printf(" %d", array[x][j]);
		}

		printf("\n");
	}

	printf("\n The frequency of occurance of odd number = %d\n",odd);
	printf("The frequency of occurance of even number = %d\n", even);
}