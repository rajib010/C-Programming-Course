#include<stdio.h>
#include<string.h>

int main(){
    char str[100],newStr[100];
    printf("Enter the string: ");
    gets(str);
    // printf("Upper case conversion: %s", strupr(str));
    printf("Lower case conversion: %s", strlwr(str));

    return 0;
}