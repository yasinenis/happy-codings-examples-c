// Program Code to print array in C
#include <stdio.h>

int main()
{
	int array[10] = { 3,9,2,1,5,8,6,7,9, };
	int loop;

	for (loop = 0;loop < 10;loop++)
	{
		printf("%d ", array[loop]);
	}

	return 0;
}