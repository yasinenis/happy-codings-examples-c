// Pass array with different dimension into function
#include <stdio.h>

void print_onedim(int a[]);
void print_twodim(int a[][4]);
void print_threedim(int a[][3][4]);

int main()
{
	int cnt = 0;
	int a[2][3][4];
	int x, j, k;

	for (x = 0;x < 2;x++)
	{
		for (j = 0;j < 3;j++)
		{
			for (k = 0;k < 4;k++)
			{
				a[x][j][k] = cnt;
				cnt++;
			}
		}
	}

	print_onedim(a[1][1]);
	print_twodim(a[1]);
	print_threedim(a);

	return 0;
}

void print_onedim(int a[])
{
	int x;

	for (x = 0;x < 4;x++)
	{
		printf("%d ", a[x]);
	}
}

void print_twodim(int a[][4])
{
	int j;

	for (j = 0;j < 3;j++)
	{
		print_onedim(a[j]);
	}

	printf("\n");
}

void print_threedim(int a[][3][4])
{
	int j;

	printf("Each two dimension matrix\n");
	for (j = 0;j < 2;j++)
	{
		print_twodim(a[j]);
	}
}