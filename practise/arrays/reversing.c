#include <stdio.h>

int main() {
    int i, n, temp;
    int arr[] = {2, 3, 4, 5, 6,7,8,9};
    n = sizeof(arr) / sizeof(arr[0]); // Calculate the length of the array
    int revArr[n];

    // Reversing the array
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    // Printing the reversed array
    printf("Reversed array is:");

    for (i = 0; i < n; i++) {
        printf(" %d", arr[i]); // Add a space for better readability
    }
    
    printf("\n");

    return 0;
}
