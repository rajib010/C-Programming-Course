// this is a program to search an item in array

#include <stdio.h>

int Search(int a[])
{
    int i, num, flag = 0;
    printf("Enter the value to be searched: ");
    scanf("%d", &num);
    for (i = 0; i < 5; i++)
    {
        if (a[i] == num)
        {
            flag = i;
        }
    }

    if (flag != 0)
    {
        printf("Number found in %d index of array.", flag);
    }
    else
    {
        printf("Not matched.");
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    Search(arr);
}