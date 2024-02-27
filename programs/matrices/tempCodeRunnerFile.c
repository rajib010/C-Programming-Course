// lower triangular matrix
// #include <stdio.h>
// #include <math.h>
// int main()
// {

//     int a[3][3], i, j, sum = 0;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("Enter a element for A : ");
//             scanf("%d", &a[i][j]);
//         }
//     }

//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             if (i > j)
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