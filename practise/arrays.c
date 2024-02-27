// // // // program that calculate the total stock value

// // // #include<stdio.h>

// // // int main(){
// // //     int stock[5];
// // //     int total=0;
// // //     for(int i=0;i<5;i++){
// // //         printf("Enter the price of %d bulb:",i+1);
// // //         scanf("%d",&stock[i]);
// // //         total+=stock[i];
// // //     }
// // //     printf("total value in the stock is %d", total);
// // // }

// // // find the smallest and the largest element in array

// // #include <stdio.h>

// // int main()
// // {
// //     int arr[5], sm, la;
// //     for (int i = 0; i < 5; i++)
// //     {
// //         printf("Enter a number : ");
// //         scanf("%d", &arr[i]);
// //     }
// //     sm = arr[0];
// //     for (int i = 0; i < 5; i++)
// //     {
// //         if (sm > arr[i])
// //         {
// //             sm = arr[i];
// //         }
// //     }
// //     printf("The smallest number is %d", sm);
// //     la = arr[0];
// //     for (int i = 0; i < 5; i++)
// //     {
// //         if (la < arr[i])
// //         {
// //             la = arr[i];
// //         }
// //     }
// //     printf("The largest number is %d", la);
// //     return 0;
// // }

// // read the matrix of size M*N

// #include <stdio.h>

// int main()
// {
//     int i, j, m, n, r, s, p, q;
//     printf("Enter the value of M and N: ");
//     scanf("%d %d", &m, &n);
//     printf("Enter the value of P and Q: ");
//     scanf("%d %d", &p, &q);

//     if (m != p && n != q)
//     {
//         printf("The rows and columns of the matrices doesnot match.");
//     }
//     int A[m][n], B[p][q], C[r][s];

//     for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             printf("Enter the %d %d element of matrix A:", i + 1, j + 1);
//             scanf("%d", &A[i][j]);
//         }
//     }

//     printf("The elements of the matrix A are : \n");
//     for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             printf("%d\t", A[i][j]);
//         }
//         printf("\n");
//     }
//     for (i = 0; i < p; i++)
//     {
//         for (j = 0; j < q; j++)
//         {
//             printf("Enter the %d %d element of matrix B:", i + 1, j + 1);
//             scanf("%d", &B[i][j]);
//         }
//     }

//     printf("The elements of the matrix B are : \n");
//     for (i = 0; i < p; i++)
//     {
//         for (j = 0; j < q; j++)
//         {
//             printf("%d\t", B[i][j]);
//         }
//         printf("\n");
//     }

//     printf("After addition of both matrices the new matrix is : ");

//     for(i=0;i<m;i++){
//         for (j=0;j<n;j++){
//             C[i][j]=A[i][j]+B[i][j];
//         }
//     }
//     for (i = 0; i < p; i++)
//     {
//         for (j = 0; j < q; j++)
//         {
//             printf("%d\t", C[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// multiplication of two matrices

#include <stdio.h>

int main()
{
    int i, j, m, n, o, p, k;
    printf("Enter the rows and colums of Matrix A:");
    scanf("%d %d", &m, &n);
    printf("Enter the rows and columns of Matrix B: ");
    scanf("%d %d", &o, &p);

    int A[m][n], B[o][p];
    if (n != o)
    {
        printf("The multiplication is not possible.");
    }
    else
    {
        int result[m][p];
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("Enter the %d %d element of Matrix A: ", i+1, j+1);
                scanf("%d", &A[i][j]);
            }
        }
        for (i = 0; i < o; i++)
        {
            for (j = 0; j < p; j++)
            {
                printf("Enter the %d %d element of Matrix B: ",i+1,j+1);
                scanf("%d", &B[i][j]);
            }
        }

        // for multiplication

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < p; j++)
            {
                result[i][j] = 0;
                for (k = 0; k < n; k++)
                {
                    result[i][j] = A[i][k] * B[k][j];
                }
            }
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d\t", result[i][j]);
            }
            printf("\n");
        }
    }
}