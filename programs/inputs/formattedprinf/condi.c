#include <stdio.h>

int main()
{
    // int a, b;
    // printf("Enter any two numbers: ");
    // scanf("%d %d", &a, &b);
    // if (a > b)
    // {
    //     printf("A is greater");
    // }
    // // if(b>a){
    // //     printf("B is greater");
    // // }
    // else if (a == b)
    // {
    //     printf("a is equals to b");
    //     if (a == 8)
    //     {
    //         printf("a is 8");
    //     }
    //     else
    //     {
    //         printf("a is %d", a);
    //     }
    // }
    // else
    // {
    //     printf("b is greater than a");
    // }

    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);

    if(marks>90){
        printf("A+");
    }
    else if(marks>80){
        printf("A");
    }
    else if(marks>70){
        printf("B+");
    }
    else if(marks>60){
        printf("B");
    }
    else if(marks>50){
        printf("C+");
    }
    else if(marks>40){
        printf("C");
    }
    else if(marks<40){
        printf("Successfully failed!!!");
    }
    else{
        printf("Error input...");
    }
    return 0;
}