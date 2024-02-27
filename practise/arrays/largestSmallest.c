// //finding the largest and smallest element in the array

// #include<stdio.h>
// #define n 5

// int main(){

//     //taking the elements of array
//     int i,j,arr[n],largest,smallest;
//     for(i=0;i<n;i++){
//         printf("Enter the %d element of the array: ",i);
//         scanf("%d",&arr[i]);
//     }
//         largest=arr[0];
//         smallest=arr[0];

//     for(i=0;i<n;i++){

//     //finding the largest
//         if(arr[i]>largest){
//             largest=arr[i];
//         }

//     //finding the smallest
//         if(arr[i]<smallest){
//             smallest=arr[i];
//         }
//     }

//     printf("The largest number is %d \n", largest);
//     printf("The smallest number is %d \n",smallest);

// }

// to find the second largest and second smallest

#include <stdio.h>

int main()
{
    int i, j, n,temp;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    int arr[n];

    // enter the elements in array
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element of the array: ", i);
        scanf("%d", &arr[i]);
    }

    // sorting using selection sort

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if(arr[i]>arr[j]){
                temp =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("The second largest is %d and second smallest is %d", arr[n-2], arr[1]);
}