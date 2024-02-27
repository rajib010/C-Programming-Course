// here we are going to see the four different types of user-defined functions

// functions with no arguments and no return types

// #include <stdio.h>
// void sum()
// {
//     int a, b, s;
//     printf("Enter the value of a and b: ");
//     scanf("%d %d", &a, &b);
//     s = a + b;
//     printf("The sum of two numbers is %d", s);
// }

// int main()
// {
//     sum();
//     printf("\n This is a function with no arguments and return type");
//     return 0;
// }

// the function with arguments but no return type

// #include <stdio.h>

// void sum(int a, int b)
// {
//     int s;
//     s = a + b;
//     printf("The sum of two numbers is %d", s);
// }

// int main()
// {
//     int ab, bc;
//     printf("Enter the value of a and b");
//     scanf("%d %d", &ab, &bc);

//     sum(ab, bc);
//     return 0;
// }

// functions with no arguments but return

// #include<stdio.h>

// int sum(){
//     int a,b,s;
//     printf("Enter the value of a and b");
//     scanf("%d %d",&a,&b);
//     s=a+b;
//     return s;
// }

// int main(){
//     printf("The sum of two numbers is %d", sum());
//     return 0;
// }

// functions with arguments and return type

#include <stdio.h>

int sum(int a, int b)
{
    int s;
    s = a + b;
    return s;
}

int main()
{
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    printf("The sum of two numbers is %d", sum(a,b));
    return 0;
}