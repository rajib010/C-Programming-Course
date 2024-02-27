#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp;
    char s[35];
    fp = fopen("BCA2nd.txt", "r");
    if (fp == NULL)
    {
        printf("File cannot be found");
    }
    else
    {
        printf("File has opened");
    }
    fgets(s, 20, fp);
    printf("\nThe accessed data from the file is %s",s);
}