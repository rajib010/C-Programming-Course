#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("newFile.txt", "w");
    if (fp == NULL)
    {
        printf("\n Cannot create file... \n");
        return 1;
    }

    printf("File successfully created..");
    fputs("Hello World!!!", fp);
    fclose(fp);
    return 0;
}