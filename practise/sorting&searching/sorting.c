// // Bubble sort
// #include <stdio.h>

// int main()
// {
//     int n, i, j, temp;
//     printf("Enter the number of elements in array: ");
//     scanf("%d", &n);
//     int arr[n];

//     // taking the elements of array....
//     for (i = 0; i < n; i++)
//     {
//         printf("Enter the %dth element of the array: ", i);
//         scanf("%d", &arr[i]);
//     }

//     // displaying the unsorted element of array...
//     printf("The unsorted array is : \n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d \t", arr[i]);
//     }

//     // sorting the array

//     for (i = 0; i < n - 1; i++)
//     {
//         for(j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 temp= arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }

//     printf("\n The sorted array is \n");

//     for(i=0;i<n;i++){
//         printf("%d \t",arr[i]);
//     }
//     return 0;
// }

// selection sort
// in selection sort we find out the smallest or largest among the given elements and replace it with the first element..

// // Selection sort
#include <stdio.h>

int main()
{
    int n, i, j, temp;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    int arr[n];

    // taking the elements of array....
    for (i = 0; i < n; i++)
    {
        printf("Enter the %dth element of the array: ", i);
        scanf("%d", &arr[i]);
    }

    // displaying the unsorted element of array...
    printf("The unsorted array is : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }

    // sorting the array using selection sort

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("The sorted array is : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }

    return 0;
}
