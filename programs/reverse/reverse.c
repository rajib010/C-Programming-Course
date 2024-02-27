// #include<stdio.h>
// #include<string.h>
// int main(){
//     char name[] = "Balen";
//     int length = strlen(name);
//     char rev[length + 1];
    
//     for(int i=0;i<length;i++){
//         rev[i] = name[length-i-1];
//     }
//     rev[length] = '\0';
//     printf("The reversed string is: ");
//     puts(rev);
// }


// checking if palindrome string
#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "aayaa";
    int length = strlen(str);
    char rev[length + 1];
    
    for(int i=0;i<length;i++){
        rev[i] = str[length-i-1];
    }
    rev[length] = '\0';
    int result = strcmp(rev,str);
    if(result==0){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
}
