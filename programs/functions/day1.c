// #include<stdio.h>

// void sum();
// int main(){
//     int add;
//     sum();
//     return 0;
// }

// void sum(){
//     int a,b,s;
//     a=5;
//     b=6;
//     s=a+b;
//     printf("The result of sum is %d",s);
// }

// #include<stdio.h>

// void sum(int a, int b);
// int main(){
//     int a,b;
//     printf("Enter two values: ");
//     scanf("%d %d",&a,&b);
//     sum(a,b);
//     return 0;
// }

// void sum(int a, int b){
//     int s;
//     s=a+b;
//     printf("The result of sum is %d",s);
// }


#include<stdio.h>

int main(){
    printf("The sum of two numbers is %d",sum());
}

int sum(){
    int a=5,b=7;
    int s=a+b;
    return s;
}