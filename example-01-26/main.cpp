// C Program to Check Array bounds while Inputing Elements into the Array
#include <stdio.h>
int main(void)
{
	int array[8], b, c;

	for (b = 0;b < 8 && (scanf_s("%d", &c));b++)
	{
		array[b] = c;
	}

	for (b = 0;b < 8;b++)
	{
		printf("%d ", array[b]);
	}
	return 0;
}