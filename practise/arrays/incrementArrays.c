#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the size of array: ");
    scanf("%d ",&n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element of array: ", i);
        scanf("%d", &arr[i]);
    }

    // adding 3 to each elements of array

    printf("The updated array is : \n");
    for(i=0;i<n;i++){
        arr[i]=arr[i]+3;

        printf("%d \t",arr[i]);
    }
}