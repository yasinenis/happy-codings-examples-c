// Program to Input an Array, Store the Squares of these Elements in an Array & Print it
#include <stdio.h>

#define maxrows 3
#define maxcols 4

void print_square(int[]);

int main(void)
{
	int w;
	int num[maxrows][maxcols] = { {8,16,36,44},{53,69,88,85},{44,36,87,49} };
	
	for (w = 0;w < maxrows;w++)
	{
		print_square(num[w]);
	}
	
	return 0;
}

void print_square(int x[])
{
	int j;
	
	for (j = 0;j < maxcols;j++)
	{
		printf("%d\t", x[j] * x[j]);
	}

	printf("\n");
}