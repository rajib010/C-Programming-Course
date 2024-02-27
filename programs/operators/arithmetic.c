#include<stdio.h>

int main(){

    int a;
    int b;
    int add;
    int sub;
    int multiply;
    int divide;
    int mod;
    
    printf("Enter a number : ");
    printf("Enter b number : ");
    scanf("%d",a);
    scanf("%d",b);
    
    add= a+b;
    sub=a-b;
    multiply=a*b;
    divide=a/b;
    mod=a%b;

    printf("The addition is %d",add);
    printf("The subtraction is %d",sub);
    printf("The multiply is %d",multiply);
    printf("The divide is %d",divide);
    printf("The modulus is %d",mod);
    return 0;
}