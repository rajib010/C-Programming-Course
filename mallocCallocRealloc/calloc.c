#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *a, i;
    int n = 5;

    a = (int *)calloc(n, sizeof(int));

    if (a == NULL)
    {
        printf("Memory is not allocatied");
        return 1;
    }

    for (i = 0; i < 5; i++)
    {
        printf("a[%d]=%d \n", i, a[i]);
    }

    free(a);
    return 0;
}