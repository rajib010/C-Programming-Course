#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10], str2[10];
    printf("Enter string 1");
    gets(str1);
    printf("Enter string 2");
    gets(str2);

    int result = strcmp(str1, str2);

    if (result == 0)
    {
        printf("Both the strings are same");
    }
    else if (result < 0)
    {
        printf("String 1 is less than string 2");
    }else{
        printf("String 1 is greater than string 2.");
    }
}