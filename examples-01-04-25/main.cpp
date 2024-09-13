// Program Code to divide array
#include <stdio.h>

int main()
{
	int array[10] = { 3,8,4,1,8,7,2,5,8,9 };
	int even[10], odd[10];
	int loop, e, d;

	e = d = 0;

	for (loop = 0;loop < 10;loop++)
	{
		if (array[loop] % 2 == 0)
		{
			even[e] = array[loop];
			e++;
		}
		else
		{
			odd[d] = array[loop];
			d++;
		}
	}

	printf(" original->");

	for (loop = 0;loop < 10;loop++)
	{
		printf(" %d", array[loop]);
	}

	printf("\neven -> ");
	for (loop = 0;loop < e;loop++)
	{
		printf(" %d", even[loop]);
	}

	printf("\n odd -> ");
	for (loop = 0;loop < d;loop++)
	{
		printf(" %d", odd[loop]);
	}

	return 0;
}