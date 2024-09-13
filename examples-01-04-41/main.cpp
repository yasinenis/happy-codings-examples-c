// C Programming Code - Two dimensional int array
#include <stdio.h>

int main()
{
	int t, j, num[8][9];

	for (t = 0;t < 8;++t)
	{
		for (j = 0;j < 9;++j)
		{
			num[t][j] = (t * 9) + j + 1;
		}
	}

	/* now print them out */
	for (t = 0;t < 8;++t)
	{
		for (j = 0;j < 9;++j)
		{
			printf("%3d ", num[t][j]);
		}

		printf("\n");
	}

	return 0;
}