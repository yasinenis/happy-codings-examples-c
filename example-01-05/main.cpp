// An example of how to initialize a matrix: loop
#define sizex 36
#define sizey 18

int main()
{
	int matrix[sizex][sizey];
	int x, y; /* current element to zero */

	for (x = 0;x < sizex;++x)
	{
		for (y = 0;y < sizey;++y)
		{
			matrix[x][y] = -1;
		}
	}
	return (0);
}