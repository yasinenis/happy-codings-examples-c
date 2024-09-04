// program to copy all elements of on earray to another
#include <stdio.h>

#define maxsize 100

int main()
{
    int first[maxsize], second[maxsize];
    int x, size;

    /* Input size of the array */
    printf("Enter the size of the array : ");
    scanf_s("%d", &size);

    /* Input array elements */
    printf("Enter elements of first array : ");
    for (x = 0; x < size; x++)
    {
        scanf_s("%d", &first[x]);
    }

    /* Copy all elements from first array to second array   */
    for (x = 0; x < size; x++)
    {
        second[x] = first[x];
    }

    /*  Print all elements of first array     */
    printf("\nElements of first array are : ");
    for (x = 0; x < size; x++)
    {
        printf("%d\t", first[x]);
    }

    /* Print all elements of second array     */
    printf("\nElements of second array are : ");
    for (x = 0; x < size; x++)
    {
        printf("%d\t", second[x]);
    }

    return 0;
}
