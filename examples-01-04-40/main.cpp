// C Program Code - the use of a two - dimensional array
#include <stdio.h>

#define irows 8
#define icolumns 9

int main()
{
	int irow;
	int icolumn;
	int istatus[irows][icolumns];
	int iadd;
	int imultiple;

	for (irow = 0;irow < irows;irow++)
	{
		for (icolumn = 0;icolumn < icolumns;icolumn++)
		{
			iadd = icolumns - icolumn;
			imultiple = irow;
			istatus[irow][icolumn] = (irow + 1) * icolumn + iadd * imultiple;
		}
	}

	for (irow = 0;irow < irows;irow++)
	{
		printf("Current Row: %d\n", irow);
		printf("Relative Distance From Base:\n");
		for (icolumn = 0;icolumn < icolumns;icolumn++)
		{
			printf(" %d ", istatus[irow][icolumn]);
		}
		printf("\n\n");
	}

	return 0;
}