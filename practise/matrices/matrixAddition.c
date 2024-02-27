#include <stdio.h>

int main()
{
    int i, j, m, n, p, q;

    // initializing the size of matirx
    printf("Enter the no of rows and columns of matrix A: ");
    scanf("%d %d", &m, &n);
    int A[m][n];

    printf("Enter the no of rows and columns of matrix B: ");
    scanf("%d %d", &p, &q);
    int B[p][q];

    // taking the elements of matrix;

    if (m == p & n == q)
    { // taking elements of matrix A
        int new[m][n];
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("Enter the %d %d element of matrix A", i + 1, j + 1);
                scanf("%d", &A[i][j]);
            }
        }
        // taking elements of matrix B
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("Enter the %d %d element of matrix B", i + 1, j + 1);
                scanf("%d", &B[i][j]);
            }
        }

        // adding the matrix

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                new[i][j] = A[i][j] + B[i][j];
            }
        }

        // displaying the matrix
        printf("The sum of two matrixes is : \n");

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d \t", new[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("The no of rows and columns of matrix donot match.");
    }
}