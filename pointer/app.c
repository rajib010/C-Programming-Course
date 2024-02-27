#include <stdio.h>

int main()
{

    int x = 10;
    int *p = &x;
    int y = *p;
    printf("%d \n", y);
    printf("%u \n", *p);
    printf("Address of X: %u\n", &x);
    printf("Address of X: %u\n", p);
    return 0;
}