#include <stdio.h>

int main(){
    FILE *fp;
    char name[100],address[100];
    int id;
    fp= fopen("Employee.txt","w");
    if(fp==NULL){
        printf("File cannot be opened.");
        return 1;
    }
    printf("Enter name of the employee: ");
    scanf("%s",&name);
    printf("ID: ");
    scanf("%d",&id);
    printf("Address");
    scanf("%s",&address);
    printf("Now writing data into the file....");
    fprintf(fp,"Name= %s\nId=%d\nAddress=%s\n", name, id, address);
    printf("\n completed");
    fclose(fp);
    return 0;
}