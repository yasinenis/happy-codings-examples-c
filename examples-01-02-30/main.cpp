// Find the Median of the Elements after these 2 Sorted Arrays with Same Size
#include <stdio.h>

int getMedian(int array1[], int array2[], int n)
{
	int x = 0;
	int j = 0;
	int count;
	int m1 = -1, m2 = -1;
	
	for (count = 0;count <= n*2;count++)
	{
		if (x == n)
		{
			m1 = m2;
			m2 = array2[0];
			break;
		}
		else if (j == n)
		{
			m1 = m2;
			m2 = array1[0];
			break;
		}

		if (array1[x] < array2[j])
		{
			m1 = m2;
			m2 = array1[x];
			x++;
		}
		else
		{
			m1 = m2;
			m2 = array2[j];
			j++;
		}
	}

	return (m1 + m2) / 2;
}

int main()
{
	int array1[] = { 24,27,38,37,48 };
	int array2[] = { 23,69,64,29,45 };
	int n1 = sizeof(array1) / sizeof(array1[0]);
	int n2 = sizeof(array2) / sizeof(array2[0]);
	
	if (n1 == n2)
	{
		printf("Median is %d", getMedian(array1, array2, n1));
	}
	else
	{
		printf("not possible to findout");
	}

	getchar();

	return 0;
}