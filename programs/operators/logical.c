#include <stdio.h>

// int main()
// {

//     int a, b, c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a > b && a > c)
//     {
//         printf("%d is greatest of all numbers...", a);
//     }
//     if (b > c && c > a)
//     {
//         printf("%d is greatest of all numbers...", b);
//     }
//     else
//     {
//         printf("%d is the greatest number", c);
//     }

//     return 0;
// }


int main(){
    int age;
    printf('enter your age: ');
    scanf("%d",&age);

    if(age<=25 || age >=40){
        printf("You're eligible.");
    }
    else{
        printf("Try again later");
    }
    return 0;
}