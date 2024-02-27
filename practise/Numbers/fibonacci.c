// #include <stdio.h>

// int main()
// {
//     int fib1 = 1, fib2 = 1, prev, next, num;
//     printf("Enter the number to which you want the fibonacci series: ");
//     scanf("%d", &num);
//     prev = fib1;

//     printf("%d", fib1);

//     do
//     {
//         next = fib2 + prev;
//         prev = fib2;
//         fib2 = next;
//         printf(",%d", prev);
//     } while (num > next);

//     return 0;
// }

#include<stdio.h>
int main()
{
    char c[100];

    printf("Enter a string: ");
    scanf("%[A-Z^\n]", &c);

    printf("You entered the character: %s", c);

    return 0;
}
