#include<stdio.h>
#include<string.h>
int main(){
    char name[100];

    printf("Enter your name: ");
    // scanf("%s",&name);//showing that scanf doesnot read after the first space

    // scanf("%[^\n]",name);//readss till new line comes

    printf("Your name is %s",name);
    return 0;
}