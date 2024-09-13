// Program Code to copy array in C
#include <stdio.h>

int main()
{
	int original[10] = { 3,8,1,5,7,9,2,4,9,0 };
	int copied[10];
	int loop;

	for (loop = 0;loop < 10;loop++)
	{
		copied[loop] = original[loop];
	}

	printf("orignal -> copied \n");

	for (loop = 0;loop < 10;loop++)
	{
		printf(" %2d %2d\n", original[loop], copied[loop]);
	}

	return 0;
}

