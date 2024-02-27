#include <stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100];
    printf("Enter a string: ");
    gets(a);
    printf("Enter another string: ");
    gets(b);
    int result;
    result = strcmp(a, b);
    if(result == 0){
        printf("The strings are equal\n");
    }else if(result > 0){
        printf("%s is greater.\n",a);
    }else{
        printf("%s is greater.\n",b);
    }
    return 0;

}