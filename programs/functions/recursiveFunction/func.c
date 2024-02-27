//finding factorial using recursive functions
// #include <stdio.h>

// int factorial(int num)
// {
//     if (num == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return (num * factorial(num - 1));
//     }
// }

// int main()
// {
//     printf("The factorial is %d", factorial(5));
//     return 0;
// }



// finding sum using recursive function

// #include <stdio.h>

// int sum(int num)
// {
//     if (num == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         return (num + sum(num - 1));
//     }
// }

// int main()
// {
//     printf("The sum is %d", sum(3));

//     return 0;
// }


// difference between value copies and address copies...

#include<stdio.h>

int modify(int *a){
    *a= *a+4;
}

int main(){

    int i= 5;
    printf("The value before modifying is %d",i);

    modify(&i);
    printf("\n The value after modifying is %d",i);
    
    return 0;
}
