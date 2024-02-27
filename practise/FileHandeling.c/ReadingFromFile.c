#include<stdio.h>

int main(){
    FILE *fp;
    char s[100];
    fp=fopen("newFile.txt","r");
    if(fp==NULL){
        printf("Cannot open File...\n");
        return 1;
    }
    printf("File opened successfully\n");
    fgets(s,100,fp);
    printf("The text in the file is: \n%s", s);
    fclose(fp);
    return 0;
}