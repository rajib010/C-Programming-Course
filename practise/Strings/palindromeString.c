#include <stdio.h>
#include <string.h>

int main() {
    char str[10], rev[10];
    printf("Enter string: ");
    gets(str);
    int length = strlen(str);

    // Reverse the string
    for (int i = 0; i < length; i++) {
        rev[i] = str[length - i - 1];
    }

    rev[length] = '\0'; // Null-terminate the reversed string

    int flag = 1;
    for (int i = 0; i < length; i++) {
        if (rev[i] != str[i]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1) {
        printf("This is a palindrome string.\n");
    } else {
        printf("This is not a palindrome.\n");
    }

    return 0;
}


// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str[10],rev[10];
//     int flag;
//     printf("Enter a string: ");
//     scanf("%s",str);
//     int length= strlen(str);

//     for(int i=0;i<length;i++){
//         rev[i]=str[length-i-1];
//     }
//     rev[length]='\0';

//     printf("The reversed string is : ");

//     flag=strcmp(str,rev);

//     if(flag==0){
//         puts("palindromee");
//     }else{
//         puts("non-palindorme");
//     }

// }
