// Program to Perform Matrix Multiplication using Recursion
#include <stdio.h>

void multiply(int, int, int[][25], int, int, int[][25], int[][25], int, int, int);
void display(int, int, int[][25]);

int main()
{
    int a[25][25], b[25][25], c[25][25] = { 0 };
    int m1, n1, m2, n2, x, j;

    printf("Enter rows and columns for Matrix A respectively: ");
    scanf_s("%d%d", &m1, &n1);

    printf("Enter rows and columns for Matrix B respectively: ");
    scanf_s("%d%d", &m2, &n2);

    if (n1 != m2)
    {
        printf("Matrix multiplication not possible. \n");
    }
    else
    {
        printf("Enter elements in Matrix A:\n");
        for (x = 0; x < m1; x++)
        {
            for (j = 0; j < n1; j++)
            {
                scanf_s("%d", &a[x][j]);
            }
        }

        printf("\nEnter elements in Matrix B:\n");
        for (x = 0; x < m2; x++)
        {
            for (j = 0; j < n2; j++)
            {
                scanf_s("%d", &b[x][j]);
            }
        }

        // Matrix multiplication
        multiply(m1, n1, a, m2, n2, b, c, 0, 0, 0);

        // Display result
        printf("On matrix multiplication of A and B the result is:\n");
        display(m1, n2, c);
    }

    return 0;
}

void multiply(int m1, int n1, int a[25][25], int m2, int n2, int b[25][25], int c[25][25], int x, int j, int k)
{
    if (x >= m1)
    {
        return; // All rows processed
    }
    else if (j < n2)
    {
        if (k < n1)
        {
            // Matrix multiplication logic
            c[x][j] += a[x][k] * b[k][j];
            multiply(m1, n1, a, m2, n2, b, c, x, j, k + 1); // Move to next element in row
        }
        else
        {
            // Move to next column in result
            multiply(m1, n1, a, m2, n2, b, c, x, j + 1, 0);
        }
    }
    else
    {
        // Move to next row in result
        multiply(m1, n1, a, m2, n2, b, c, x + 1, 0, 0);
    }
}

void display(int m1, int n2, int c[25][25])
{
    int x, j;

    for (x = 0; x < m1; x++)
    {
        for (j = 0; j < n2; j++)
        {
            printf("%d ", c[x][j]);
        }
        printf("\n");
    }
}
