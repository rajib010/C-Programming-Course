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