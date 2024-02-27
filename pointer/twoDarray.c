// #include <stdio.h>
// #include<stdlib.h>
// #define m 2
// #define n 3

// int main()
// {

//     int(*a)[n], i, j;
//     int (*b)[n];
//     printf("Enter the element of 1st matrix a of dimension %d %d", m, n);
//     for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             scanf("%d", *(a + i) + j);
//         }
//     }
//     for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             scanf("%d", *(b + i) + j);
//         }
//     }

//     printf("The elements of given matrix is : \n");

//     for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             printf("%d\t", *(*(a + i) + j));
//         }
//     }
//     printf("\n");
//     return 0;
// }

// the above program doesnot work so we use the follwing code

#include <stdio.h>
#include <stdlib.h>
#define m 2
#define n 3

int main()
{
    int **a, **b,**sum, i, j;

    a = (int **)malloc(m * sizeof(int *));
    b = (int **)malloc(m * sizeof(int *));
    sum = (int **)malloc(m * sizeof(int *));
    printf("Enter the element of 1st matrix  of dimension %d %d", m, n);
    for (i = 0; i < m; i++)
    {
        a[i] = (int *)malloc(n * sizeof(int));
        b[i] = (int *)malloc(n * sizeof(int));
        sum[i] = (int *)malloc(n * sizeof(int));
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", *(a + i) + j);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", *(b + i) + j);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
        {
            *(*(sum+i)+j)=*(*(a+i)+j) +*(*(b+i)+j);
        }
    }
    // for (size_t i = 0; i < count; i++)
    // {
    //     /* code */
    // }
    
    printf("The elements of given matrix A is : \n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", *(*(a + i) + j));
        }
    printf("\n");
    }
    printf("The elements of given matrix B is : \n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", *(*(b + i) + j));
        }
    printf("\n");
    }
    printf("The elements of given matrix Sum is : \n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", *(*(sum + i) + j));
        }
    printf("\n");
    }


    for(i=0;i<n;i++){
        free(a[i]);
        free(b[i]);
    }

    free(a);
    free(b);

    return 0;
}
