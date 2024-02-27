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
    int transpose[n][m];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
           transpose[i][j] = A[j][i];
            printf("%d \t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}