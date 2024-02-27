// this is a program to convert lowercase to upper case using pointer functions

#include <stdio.h>

void Conversion(char *ch)
{
    if (*ch >= 97 && *ch <= 122)
    {
        *ch = *ch - 32;
    }
    else if (*ch >= 65 && *ch <= 90)
    {
        *ch = *ch + 32;
    }
}

int main()
{
    char ch;
    printf("Enter a character: ");
    ch = getchar();

    Conversion(&ch);
    printf("The corresponding character is %c", ch);
}