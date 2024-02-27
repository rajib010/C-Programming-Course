#include <stdio.h>
#include <string.h>

int main()
{
    char c[55];
    FILE *fp, *nfp;
    fp = fopen("testFile.txt", "r");
    if (fp == NULL)
    {
        printf("Error in opening the file...");
        return 1;
    }
    nfp = fopen("testFile2.txt", "w");
    if (fp == NULL)
    {
        printf("Error in opening the file...");
        return 1;
    }

    while(fscanf(fp,"%s",&c)!=EOF){
        if(strcmp(c,"Ram")==0){
            fprintf(nfp,"Hari",c);
        }
        else if(strcmp(c,"Sita")==0){
            fprintf(nfp,"Gita",c);
        }
        else if(strcmp(c,"Govinda")==0){
            fprintf(nfp,"Shiva",c);
        }
        else{
            fprintf(nfp,"%s",c);
        }
        fclose(fp);
        fclose(nfp);
    }

    return 0;
}