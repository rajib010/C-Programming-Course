// // // #include<stdio.h>

// // // int main(){
// // //     int m,n,o,p,i,j,k;
// // //     int a[15][15], b[15][15], prod[15][15];// initialize array...
// // //     printf("Enter the rows and columns of 1st matrix(<15): ");
// // //     scanf("%d %d",&m,&n);
// // //     printf("Enter the rows and columns of 2nd matrix(<15): ");
// // //     scanf("%d %d",&o,&p);
// // //     // taking the elements...
// // //     for(i=0;i<m;i++){
// // //         for (j=0;j<n; j++)
// // //         {
// // //             printf("\n Enter the [%d][%d] elements of 1st matrix: ", i,j);
// // //             scanf("%d",&a[i][j]);
// // //             printf("\n");
// // //         }
// // //     }
// // //     for(i=0;i<m;i++){
// // //         for (j<0;j<n; j++)
// // //         {
// // //             printf("\n Enter the [%d][%d] elements of 2nd matrix: ",i,j);
// // //             scanf("%d",&b[i][j]);
// // //             printf("\n");
// // //         }
// // //     }
// // //     if(n!=o){
// // //         printf("Multiplication is not possible.");
// // //         return 0;
// // //     }else if(n==o){
// // //         for(i=0;i<m;i++){
// // //             for(j=0;j<n;j++){
// // //                 prod[i][j]=0;
// // //                 for(k=0;k<n;k++){
// // //                     prod[i][j]+=a[i][k]*b[k][j];
// // //                 }
// // //             printf("%d/t %d/t %d/t",i,j,k);
// // //             }

// // //         }
// // //     }

// // // }
// // // wap to add elements of diagonal matrix where rows and columns are defined by user....
// // #include<stdio.h>
// // #include<math.h>

// // int main(){
// //     int m,n, a[10][10], sum = 0;
// //     input:
// //     printf("\nEnter the rows and column of matrix: ");
// //     scanf("%d %d", &m, &n);
// //     if( m!= n){
// //         printf("\nThe sum of diagonal elements is not possible!");
// //         printf("\nThe rows and column must be equal for the sum of diagonal elements!\n");
// //         goto input;
// //     }else{
// //         for(int i = 0; i < m; i++){
// //         for (int j = 0; j < n; j++){
// //             printf("Enter the matrix A [%d][%d] element: ", i+1, j+1);
// //             scanf("%d", &a[i][j]);
// //         }
// //         printf("\n");
// //     }
// //     printf("\nThe given matrix A is \n");
// //     for(int i = 0; i < m; i++){
// //         for (int j = 0; j < n; j++){
// //             printf("%d\t ", a[i][j]);
// //         }
// //         printf("\n");
// //     }

// //     for(int i = 0; i < m; i++){
// //         for (int j = 0; j < n; j++){
// //                     if(i==j){
// //                         sum += pow(a[i][j],2);
// //                     }
// //                 }
// //             }
// //     printf("\nThe sum of diagonal element is %d\n", sum);
// //     }
// // }

// // // wap to add sum of all elements given by user in 3x3 matrix.....

// // #include<stdio.h>
// // int main(){
// //     int a[3][3],sum = 0 , diagonalSum = 0;

// //     for(int i = 0; i < 3; i++){
// //         for (int j = 0; j < 3; j++){
// //             printf("Enter the matrix A [%d][%d] element: ", i+1, j+1);
// //             scanf("%d", &a[i][j]);
// //         }
// //         printf("\n");
// //     }
// //     printf("\nThe given matrix A is \n");
// //     for(int i = 0; i < 3; i++){
// //         for (int j = 0; j < 3; j++){
// //             printf("%d\t ", a[i][j]);
// //         }
// //         printf("\n");
// //     }

// //     for(int i = 0; i<3; i++){
// //         for (int j = 0; j < 3; j++){
// //             sum += a[i][j];
// //         }
// //     }
// //     printf("\nThe sum of element is %d\n", sum);
// //     return 0;
// // }

// // // upper triangular matirx

// // #include <stdio.h>
// // #include <math.h>
// // int main()
// // {

// //     int a[3][3], i, j;
// //     for (i = 0; i < 3; i++)
// //     {
// //         for (j = 0; j < 3; j++)
// //         {
// //             printf("Enter a element for A : ");
// //             scanf("%d", &a[i][j]);
// //         }
// //     }

// //     for (i = 0; i < 3; i++)
// //     {
// //         for (j = 0; j < 3; j++)
// //         {
// //             if (i > j)
// //             {
// //                 a[i][j] = 0;
// //             }
// //         }
// //         printf("\n");
// //     }

// //     for (i = 0; i < 3; i++)
// //     {
// //         for (j = 0; j < 3; j++)
// //         {
// //             printf("%d\t", a[i][j]);
// //         }
// //         printf("\n");
// //     }

// //     return 0;
// // }

// // // lower triangular matrix
// #include <stdio.h>
// #include <math.h>
// int main()
// {

//     int a[3][3], i, j;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("Enter the [%d][%d] element for A : ",i+1,j+1 );
//             scanf("%d", &a[i][j]);
//         }
//     }

//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             if (i < j)
//             {
//                 a[i][j] = 0;
//             }
//         }
//         printf("\n");
//     }

//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int i, j, k, m, n, o, p;
    printf("Enter the no of rows and columns for Matrix A: ");
    scanf("%d %d", &m, &n);
    printf("Enter the no of rows and columns for Matrix B: ");
    scanf("%d %d", &o, &p);
    int arr[m][n], brr[o][p], new[m][p] ;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the [%d][%d] element of the matrix A: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    printf("The elements of matrix A are: \n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < o; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("Enter the [%d][%d] element of the matrix B: ", i + 1, j + 1);
            scanf("%d", &brr[i][j]);
        }
        printf("\n");
    }

    printf("The elements of matrix B are: \n");

    for (i = 0; i < o; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("%d \t", brr[i][j]);
        }
        printf("\n");
    }

    if (n !=o)
    {
        printf("Multiplication is not possible");
        return 0;
    }
    else if (n == o)
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                new[i][j] = 0;
                for (k = 0; k < n; k++)
                {
                    new[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }
        printf("The product of matrix A and B is :\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("%d \t", new[i][j]);
        }
        printf("\n");
    }

    }
    return 0;
}