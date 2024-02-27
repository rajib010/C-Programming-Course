#include <stdio.h>

int main()
{
    // int a, b, c;
    // printf("Enter three numbers: ");
    // scanf("%d %*d %d", &a, &b, &c);
    // printf("The numbers given are %d,%d,%d", a, b, c);
    // return 0;


    char string[100];
    printf("Enter any string: ");
    // scanf("%[A-z,a-z,0-9]s",&string);
    scanf("%[^\n]",&string);
    printf("%s",string);
    return 0;
}