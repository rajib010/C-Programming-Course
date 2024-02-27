#include<stdio.h>

int main(){

    int age=25;
    const char* result=(age>18)?"Adult":"Minor";
    printf("You are %s",result);
    return 0;
}