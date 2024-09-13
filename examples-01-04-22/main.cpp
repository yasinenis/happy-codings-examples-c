// C Programming - print the adress of array elements
#include <stdio.h>

int main()
{
	int val[7] = { 11,22,33,44,55,66,77 };
	
	/* for loop to print value and address of each element of array */
	for (int j = 0;j < 7;j++)
	{
		/* The correct way of displaying the address would be using
		%p format specifier like this: 
		
		printf("val[%d]: value is %d and address is %p\n",j,val[j],&val[j]; 
		Just to demonstrate that the array elements are stored in contiguous
		locations, I m displaying the adresses in integer 
		*/
		printf("val[%d]: value is %d and address is %d\n", j, val[j], &val[j]);
	}
	return 0;
}