#include<stdio.h>
#include<string.h>

int main(){
    char str[100],rev[100];
    int i, j, len,flag;

    printf("Enter a string: ");
    gets(str);
    len = strlen(str);

    for(i=0;i<len;i++){
        rev[i]= str[len-1-i];
    }
    rev[len]='\0';
    flag=0;

    for(i=0;i<len;i++){
        if(str[i]!=rev[i]){
            flag =1;
            break;
        }
    }

    if(flag==1){
        printf("Not Palindrome...");
    }else{
        printf("palindrome..");
    }

    return 0;
}