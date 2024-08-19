// C Programming Array: assign and retrieve value
#include <stdio.h>

int main()
{
	int x = 0;
	int arr[5];

	for (x = 0;x < 5;x++)
	{
		arr[x] = x;
	}
	for (x = 0;x < 5;x++)
	{
		printf("%d\n", arr[x]);
	}
}