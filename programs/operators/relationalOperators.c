#include<stdio.h>

int main(){

    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    if (a>b){
        printf("A is greater than B.");
    }
    if (a<b){
        printf("A is less than B.");
    }
    if (a==b){
        printf("A is equal to B.");
    }
    return 0;
}