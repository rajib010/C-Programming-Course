// WE will run a function by passing its memory address

#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int x = 4, y = 5;
    printf("The values of x and y before is %d %d", x, y);
    swap(&x, &y);
    printf("\nThe value of X and Y after swapping is %d %d", x, y);
    return 0;
}