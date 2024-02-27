#include <stdio.h>
int main()
{
    int choice;
    printf("Enter a number: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Today is Sunday");
        break;
    case 2:
        printf("Today is MOnday");
        break;
    case 3:
        printf("Today is Tuesday");
        break;
    case 4:
        printf("Today is Wednesday");
        break;
    case 5:
        printf("Today is Thrusday");
        break;
    case 6:
        printf("Today is Friday");
        break;
    case 7:
        printf("Today is Saturday");
        break;

    default:
        printf("The output is invalid");
        break;
    }
}