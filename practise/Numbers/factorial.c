// #include<stdio.h>

// int main(){
//     int i, num,fact=1;

//     puts("Enter the number whose factorial you want to find out");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++){
//         fact = fact*i;
//     }

//     printf("The factorial of the number is %d", fact);

//     return 0;
// }

// factorial using recursive function

#include <stdio.h>

int fact(n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int main(){
    int num, factorial;
    printf("Enter the number whose factorial is to be found: ");
    scanf("%d",&num);

    factorial= fact(num);

    printf("The factorial of %d is %d", num, factorial);

    return 0;
}
