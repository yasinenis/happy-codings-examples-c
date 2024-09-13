// Print Square of Each Element of 2D Array Matrix 
#include <stdio.h>
#include <conio.h>

#define maxrows 3
#define maxcols 4

void print_square(int[]);

int main()
{
	int row;
	int num[maxrows][maxcols] = { {3,8,4,3},{4,2,5,9},{3,1,0,10} };

	for (row = 0;row < maxrows;row++)
	{
		print_square(num[row]);
	}
	return 0;
}

void print_square(int x[])
{
	int col;

	for (col = 0;col < maxcols;col++)
	{
		printf("%d\t", x[col] * x[col]);
	}
	printf("\n");
}