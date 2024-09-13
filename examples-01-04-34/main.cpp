// Program to reverse copy array in C
#include <stdio.h>

int main()
{
	int original[25] = { 2,4,6,8,1,3,5,7,9,0 };
	int copied[25];
	int loop, count;

	count = 9;

	for (loop = 0;loop < 25;loop++)
	{
		copied[count] = original[loop];
		count--;
	}

	printf("original -> copied \n");

	for (loop = 0;loop < 25;loop++)
	{
		printf("  %2d  %2d\n", original[loop], copied[loop]);
	}

	return 0;
}