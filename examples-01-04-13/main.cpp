// Getting the values in a two-dimensional array
#include <stdio.h>

int main()
{
	int j = 0;
	char t[3][3] = { {'3','8','3'},{'9','7','4'},{'2','1','6'} };

	/* List all elements of the array */
	for (j = 0;j < 9;j++)
	{
		printf(" t: %c\n", *(*t + j));
	}
}