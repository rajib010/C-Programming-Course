#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    fp=fopen("file1.txt","rb");
    if(fp==NULL){
        printf("Error in opening file\n");
    }
    printf("\nIn position pointer = %d", ftell(fp));
    fseek(fp,0,2);
    printf("\nPosition pointer = %d", ftell(fp));
    rewind(fp);

    printf("\nPosition pointer = %d", ftell(fp));
    fclose(fp);
}