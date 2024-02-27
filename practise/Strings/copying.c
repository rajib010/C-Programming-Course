#include<stdio.h>
#include<string.h>
int main(){
    char msg[]="Happy new Year";
    char new[50];

    printf("Original Message: %s\n",msg);

    //strcpy helps to copy the strings value
    strcpy(new,msg);
    printf("Copied message: %s to everyone \n", new);

    return 0;
}