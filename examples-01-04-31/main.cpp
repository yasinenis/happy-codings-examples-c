// Program to print reverse array in C
#include <stdio.h>

int main()
{
	int array[10] = { 8,5,1,7,5,9,2,3,9,0 };
	int loop;

	for (loop = 9;loop >= 0;loop--)
	{
		printf("%d ", array[loop]);
	}

	return 0;
}