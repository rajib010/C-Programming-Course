#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp, digit, sum=0;
    printf("Enter a number : ");
    scanf("%d", &num);

    temp = num;
    while (num != 0)
    {
        digit = num % 10;
        sum += digit*digit*digit;
        num /= 10;
    }

    if (temp == sum)
    {
        printf("This is an Armstrong number.\n");
    }
    else
    {
        printf("This is not an Armstrong number.\n");
    }
}
