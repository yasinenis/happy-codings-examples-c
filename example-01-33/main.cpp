// C Program to Compute the Product of Two Matrices
#include <stdio.h>

#define maxrows 10
#define maxcols 10

void readMatrix(int arr[][maxcols], int m, int n);
void printMatrix(int arr[][maxcols], int m, int n);
void productMatrix(int array1[][maxcols], int array2[][maxcols], int array3[][maxcols], int m, int n);
int main()
{
    int array1[maxrows][maxcols], array2[maxrows][maxcols], array3[maxrows][maxcols];
    int m, n;
    printf("Enter the value of m and n \n");
    scanf_s("%d %d", &m, &n);
    printf("Enter Matrix array1 \n");
    readMatrix(array1, m, n);
    printf("Matrix array1 \n");
    printMatrix(array1, m, n);

    printf("Enter Matrix array2 \n");
    readMatrix(array2, m, n);
    printf("Matrix B \n");
    printMatrix(array2, m, n);

    productMatrix(array1, array2, array3, m, n);
    printf("The product matrix is \n");
    printMatrix(array3, m, n);
    return 0;
}

/*  Input Matrix array1 */
void readMatrix(int arr[][maxcols], int m, int n)
{
    int x, j;
    for (x = 0; x < m; x++)
    {
        for (j = 0; j < n; j++)

        {
            scanf_s("%d", &arr[x][j]);
        }
    }
}

void printMatrix(int arr[][maxcols], int m, int n)
{
    int x, j;
    for (x = 0; x < m; x++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%3d", arr[x][j]);
        }
        printf("\n");
    }
}

/*  Multiplication of matrices */
void productMatrix(int array1[][maxcols], int array2[][maxcols], int array3[][maxcols], int m, int n)
{
    int x, j, k;
    for (x = 0; x < m; x++)
    {
        for (j = 0; j < n; j++)
        {
            array3[x][j] = 0;
            for (k = 0; k < n; k++)
            {
                array3[x][j] = array3[x][j] + array1[x][k] *
                    array2[k][j];
            }

        }

    }

}
