#include <stdio.h>
#include <string.h>

int main()
{

    int i, length;
    char str[100];

    printf("Enter the character: ");
    gets(str);
    length = strlen(str);
    char rev[length + 1];

    // reversing the string
    for (i = 0; i < length; i++)
    {
        rev[i] = str[length - i - 1];
    }

    rev[length] = '\0';

    printf("The reversed string is : %s", rev);
}