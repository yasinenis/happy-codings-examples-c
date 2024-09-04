// C Program to Find the Trace & Normal of a given Matrix
#include <stdio.h>
#include <math.h>
/* 
Trace is defined as the sum of main diagonal elements
Normal is defined as square root of the sum of all the elements
*/
int main()
{
	static int array[8][8];
	int x, j, m, n, sum = 0, sum1 = 0, a = 0, normal;

	printf("Enter the order of the matrix\n");
	scanf_s("%d %d", &m, &n);

	printf("Enter the n coefficients of the matrix \n");
	for (x = 0;x < m;++x)
	{
		for (j = 0;j < n;++j)
		{
			scanf_s("%d", &array[x][j]);
			a = array[x][j] * array[x][j];
			sum1 = sum1 + a;
		}
	}

	normal = sqrt(sum1);
	printf("The normal of the given matrix is = %d\n", normal);
	for (x = 0;x < m;++x)
	{
		sum = sum + array[x][x];
	}

	return 0;
}