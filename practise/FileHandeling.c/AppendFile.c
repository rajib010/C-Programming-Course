#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("newFile.txt", "a+");
    if (fp == NULL)
    {
        printf("Cannot open file...");
        return 1;
    }
    printf("file opened successfully\n");
    fputs("I am comming home", fp);
    fclose(fp);
    return 0;
}