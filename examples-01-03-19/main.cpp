#include <stdio.h>
#include <stdlib.h>

void Merge(int*, int, int, int);

void MergeSort(int* array, int left, int right)
{
    if (left < right)
    {
        int middle = (left + right) / 2;

        /* Sort the left part */
        MergeSort(array, left, middle);

        /* Sort the right part */
        MergeSort(array, middle + 1, right);

        /* Merge the two sorted parts */
        Merge(array, left, middle, right);
    }
}

/* Merge function merges the two sorted parts */
void Merge(int* array, int left, int middle, int right)
{
    // Using dynamic allocation for tmp array
    int* tmp = (int*)malloc((right - left + 1) * sizeof(int));
    if (tmp == NULL) // Error handling for malloc failure
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    int pos = 0, leftposition = left, rightposition = middle + 1;

    while (leftposition <= middle && rightposition <= right)
    {
        if (array[leftposition] < array[rightposition])
        {
            tmp[pos++] = array[leftposition++];
        }
        else
        {
            tmp[pos++] = array[rightposition++];
        }
    }

    while (leftposition <= middle)
    {
        tmp[pos++] = array[leftposition++];
    }

    while (rightposition <= right)
    {
        tmp[pos++] = array[rightposition++];
    }

    /* Copy back the sorted array to the original array */
    for (int x = 0; x < pos; x++)
    {
        array[x + left] = tmp[x];
    }

    // Freeing the dynamically allocated memory
    free(tmp);
}

int main()
{
    int size;

    printf("\nEnter the size of an array: ");
    scanf_s("%d", &size);

    // Using dynamic allocation for array
    int* array = (int*)malloc(size * sizeof(int));
    if (array == NULL) // Error handling for malloc failure
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    printf("\nEnter the array elements:\n");
    for (int x = 0; x < size; x++)
    {
        scanf_s("%d", &array[x]);
    }

    /* Calling this function sorts the array */
    MergeSort(array, 0, size - 1);

    printf("\nSorted array:\n");
    for (int x = 0; x < size; x++)
    {
        printf("%d ", array[x]);
    }
    printf("\n");

    // Freeing the dynamically allocated memory
    free(array);

    return 0;
}
