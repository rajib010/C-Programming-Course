// this is a program to find a minimum value in an array using a function

#include <stdio.h>

int Mini(int array[])
{

    int small, i;
    small = array[0];
    for (i = 0; i < 5; i++)
    {

        if (array[i] < small)
        {
            small = array[i];
        }
    }
    printf("The smallest element of the array is %d", small);
}

int main()
{
    int a[5], i;
    printf("Enter the elements of the array: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The given array is \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    Mini(a);

    return 0;
}