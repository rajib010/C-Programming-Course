#include <stdio.h>

int main()
{
    FILE *sf, *df;
    char sourceFileName[100], destFileName[100],c;

    printf("Enter source FileName: ");
    scanf("%s", sourceFileName);
    printf("Enter destination FileName: ");
    scanf("%s", destFileName);

    sf = fopen(sourceFileName, "r");
    if (sf == NULL)
    {
        printf("cannot open file...");
        return 1;
    }
    df = fopen(destFileName, "w");
    if (df == NULL)
    {
        printf("cannot open file");
        return 1;
    }

    while((c=fgetc(sf))!=EOF){
        fputc(c,df);
    }
    printf("\n...Copied Information...\n");
    fclose(sf);
    fclose(df);
    return 0;
}