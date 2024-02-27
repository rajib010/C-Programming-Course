// #include <stdio.h>
// int main()
// {
//     int arr[50], i, j, n, temp;
//     printf("Enter the value of n : ");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++)
//     {
//         printf("Enter the %d th element of the array: ", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     printf("\n the elements in unsorted order ");

//     for (i = 0; i < n; i++)
//     {
//         printf("%d\t", arr[i]);
//     } // same for both bubble and selection sort

    // selection sort
    //  for (i = 0; i < n; i++)
    //  {
    //      for (j = 1; j < n; j++)
    //      {
    //          if (arr[i] > arr[j])
    //          {
    //              temp = arr[i];
    //              arr[i] = arr[j];
    //              arr[j] = temp;
    //          }
    //      }
    //  }
    //  printf("\n the value in sorted order ");
    //  for (i = 0; i < n; i++)
    //  {
    //      printf("%d\t", arr[i]);
    //  }

    // bubble sort

    // for (i = 0; i < n-i - 1; i++)
    // {
    //     for (j = 0; j < n - 1; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             temp = arr[j];
    //             arr[j] = arr[j + 1];
    //             arr[j + 1] = temp;
    //         }
    //     }
    // }

    // printf("The value in sorted order:\n ");
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d\t", arr[i]);
    // }

#include <stdio.h>

int main()
{
    int i, n, temp, flag;
    int isFound = 0;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element of array: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to be searched for: ");
    scanf("%d", &temp);
    flag = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == temp)
        {
            isFound = 1;
            flag = i;
        }
    }

    if (isFound == 1)
    {
        printf("Element is found. It is the %d element of the array", flag);
    }
    else
    {
        printf("Element is not found.");
    }
}
