// applying sizeof() to determine an array's size
#include <stdio.h>

#define idays_of_week 7

int main()
{
	int arr[idays_of_week] = { 1,2,3,4,5,6,7 };
	printf("%d ", (int)sizeof(arr));
	
	return(0);
}