// C Program to find largest element of an Array
#include <stdio.h>

/* This is our function to find the largest element in the array arr[] */
int largest_element(int arr[], int j)
{
	int x, maxelement;

	//Initialization to the first array element
	maxelement = arr[0];

	/* Here we are comparing maxelement with
	* all other elements of array to store the
	* largest element in the maxelement variable
	*/
	for (x = 1;x < j;x++)
	{
		if (arr[x] > maxelement)
		{
			maxelement = arr[x];
		}
	}
	return maxelement;
}

int main()
{
	int arr[] = { 1,13,120,23,8,-88,360 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Largest element of array is %d", largest_element(arr, n));
	return 0;
}