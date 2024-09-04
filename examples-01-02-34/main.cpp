// Find the Odd Element given an Array with only two Different Element
#include <stdio.h>

void printodd(int array[], int size)
{
	int xor2 = array[0];
	int set;
	int j;
	int n = size - 2;
	int x = 0, y = 0;

	/* The xor will basically be xor of two odd occurring elements */
	for (j = 1;j < size;j++)
	{
		xor2 = xor2 ^ array[j];

	}

	/* Get one set rightmost bit in the xor2 */
	set = xor2 & ~(xor2 - 1);

	/* Now divide elements in two sets: */
	for (j = 0;j < size;j++)
	{
		/* XOR of first set is finally going to hold one odd occurring number x*/
		if (array[j] & set)
		{
			x = x ^ array[j];

			/* XOR of second set is finally going to hold the other*/

		}
		else
		{
			y = y ^ array[j];
		}

	}

	printf("\n The ODD elements are %d & %d ", x, y);


}

int main()
{
	int array[] = { 13,8,4,9,2,3,3,9 };
	int arr_size = sizeof(array) / sizeof(array[0]);
	printodd(array, arr_size);
	getchar();
	return 0;
}