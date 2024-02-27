#include <stdio.h>

int main()
{
    FILE *fp;
    char s[100];
    char filename[100];
    printf("Enter the name of file: ");
    scanf("%s", &filename);
    fp = fopen(filename, "a");

    if (fp == NULL)
    {
        printf("Cannot open file.\n");
        return 1;
    }
    printf("File opened successfully...");
    // fputs("This is what i have appended", fp); this is to write something to the file
    fgets(s,1000,fp);
    printf("%s",s);
    fclose(fp);
    return 0;
}