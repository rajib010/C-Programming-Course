//upper triangular matrix

#include <stdio.h>

int main()
{
    int i, j, m, n;

    // initializing the size of matirx
    printf("Enter the no of rows and columns of matrix A: ");
    scanf("%d %d", &m, &n);
    int A[m][n];

    // taking the elments of matix
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the %d %d element of matrix A", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i > j)// make triangular as per conditions...
            {
                A[i][j] = 0;
            }
            printf("%d \t",A[i][j]); //show the matrix...
        }
        printf("\n"); //new line for new rows...
    }

    return 0;
}

