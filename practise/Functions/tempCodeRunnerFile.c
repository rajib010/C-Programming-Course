// Here we find the sum of all the numbers in an array using a function

#include <stdio.h>

void output(int a[]);
int sum(int a[]);

int main()
{
    int a[10], s, i;
    printf("\n Enter 10 elements: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        output(a);
        s = sum(a);
        printf("Sum of array of element is : %d \t", s);
    }
    return 0;
}

int sum(int a[])
{
    int i, s = 0;
    for (i = 0; i < 10; i++)
    {
        s += a[i];
    }

    return s;
}

void output(int a[])
{
    int i;
    printf("The elements of the array are : \n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }
}