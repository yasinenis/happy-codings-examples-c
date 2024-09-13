// c programming code - contiguous array storage
#include <stdio.h>

#define iDAYS 7

int main()
{
	int index, iarray[iDAYS];

	printf("size(int) is %d\n\n", (int)sizeof(int));

	for (index = 0;index < iDAYS; index++)
	{
		printf("&iarray[%d] = %X\n", index, &iarray[index]);
	}

	printf("Happy Codings - C Programming Language");

	return(0);
}