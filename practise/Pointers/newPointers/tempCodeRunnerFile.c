// //     }
// // // }

// // // switch statement

// // #include <stdio.h>

// // int main()
// // {
// //     int a = 100, b = 20;
// //     char op;

// //     printf("Enter the operation to perform: ");
// //     scanf("%c", &op);

// //     switch (op)
// //     {
// //     case '+':
// //         printf("RESULT: %d", a + b);
// //         break;
// //     case '-':
// //         printf("RESULT: %d", a-b);
// //         break;
// //     default:
// //         printf("Enter a valid character");
// //         break;
// //     }
// // }

// // sum of digits of number given by user

// #include <stdio.h>

// int main()
// {

//     int num, digit, rem, sum = 0;

//     printf("Enter the number: ");
//     scanf("%d", &num);

//     while (num > 0)
//     {
//         digit = num % 10;
//         sum += digit;
//         num /= 10;
//     }

//     printf("The sum of the digits is %d", sum);
//     return 0;
// }