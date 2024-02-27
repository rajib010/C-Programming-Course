#include <stdio.h>

int main() {
    int i, j, k, m, n, p, q;

    // Initializing the size of matrices
    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d %d", &m, &n);
    int A[m][n];

    printf("Enter the number of rows and columns of matrix B: ");
    scanf("%d %d", &p, &q);
    int B[p][q];

    // Checking if multiplication is possible
    if (n == p) {
        int result[m][q]; // Matrix to store the result

        // Taking elements of matrix A
        printf("Enter elements of matrix A:\n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                printf("Enter the element at row %d, column %d: ", i + 1, j + 1);
                scanf("%d", &A[i][j]);
            }
        }

        // Taking elements of matrix B
        printf("Enter elements of matrix B:\n");
        for (i = 0; i < p; i++) {
            for (j = 0; j < q; j++) {
                printf("Enter the element at row %d, column %d: ", i + 1, j + 1);
                scanf("%d", &B[i][j]);
            }
        }

        // Multiplying the matrices
        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                result[i][j] = 0;
                for (k = 0; k < n; k++) {
                    result[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        // Displaying the result matrix
        printf("The product of the two matrices is:\n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                printf("%d \t", result[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Multiplication is not possible.\n");
    }

    return 0;
}
