// Program to Find the Number of Elements in an Array
#include <stdio.h>

int main()
{
	double arr[] = { 13,23,33,43,53,63 };
	int n;

	/* Calculating the size of the array with this formula 
	* n = sizeof(array_name) / sizeof(array_name[0])
	* This is a universal formula to find number of elements in 
	* an array, which means it will work for arrays of all
	* data types such as int,char,float etc.
	*/
	n = sizeof(arr) / sizeof(arr[0]);
	printf("Size of the array is: %d\n", n);
}