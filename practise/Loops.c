// // // // // // // // sum and average of 5 subjects using while loops

// // // // // // // #include<stdio.h>

// // // // // // // int main(){
// // // // // // //     int i=1,sum=0,num;
// // // // // // //     float avg;

// // // // // // //     while(i<=5){
// // // // // // //         printf("Enter the marks of %d subject : ",i);
// // // // // // //         scanf("%d",&num);
// // // // // // //         sum+=num;
// // // // // // //         i++;
// // // // // // //     }

// // // // // // //     printf("The sum of all the subject is %d", sum);
// // // // // // //     avg=sum/5;
// // // // // // //     printf("The average of five subjects is %.2f",avg);
// // // // // // //     return 0;
// // // // // // // }

// // // // // // // program to find the sum of digits of number

// // // // // // #include <stdio.h>

// // // // // // int main()
// // // // // // {
// // // // // //     int num, rem, sum=0;
// // // // // //     printf("Enter the number : ");
// // // // // //     scanf("%d", &num);

// // // // // //     while (num > 0)
// // // // // //     {
// // // // // //         rem = num % 10;
// // // // // //         sum += rem;
// // // // // //         num /= 10;
// // // // // //     }

// // // // // //     printf("The sum of each digit of the number is %d", sum);
// // // // // //     return 0;
// // // // // // }

// // // // // // program to check if the number is an Armstrong number

// // // // // #include <stdio.h>
// // // // // #include <math.h>

// // // // // int main()
// // // // // {
// // // // //     int num, sum = 0, rem, temp;

// // // // //     printf("Enter a number : ");
// // // // //     scanf("%d", &num);
// // // // //     temp=num;

// // // // //     while (num != 0)
// // // // //     {
// // // // //         rem = num % 10;
// // // // //         sum += rem*rem*rem;
// // // // //         num /= 10;
// // // // //     }

// // // // //     if(temp == sum){
// // // // //         printf("Armstrong!!!");
// // // // //     }
// // // // //     else{
// // // // //         printf("Not");
// // // // //     }

// // // // //     return 0;

// // // // // }

// // // // // program to read a number and display it in reverse

// // // // #include <stdio.h>

// // // // int main()
// // // // {
// // // //     int num, rev = 0, rem;
// // // //     printf("Enter a number : ");
// // // //     scanf("%d", &num);

// // // //     while (num != 0)
// // // //     {
// // // //         rem = num % 10;
// // // //         rev = rev * 10 + rem;
// // // //         num /= 10;

// // // //     }

// // // //     printf("The reversed number is %d", rev);
// // // //     return 0;
// // // // }

// // // // program to check if the number is a plaindrome number

// // // #include <stdio.h>

// // // int main()
// // // {
// // //     int num, rev = 0, temp, rem;
// // //     printf("Enter a number : ");
// // //     scanf("%d", &num);
// // //     temp = num;

// // //     while (num != 0)
// // //     {
// // //         rem = num % 10;
// // //         rev = rev * 10 + rem;
// // //         num /= 10;
// // //     }

// // //     if (temp == rev)
// // //     {
// // //         printf("Palindrome number");
// // //     }
// // //     else
// // //     {
// // //         printf("Not palindorme number");
// // //     }
// // // }

// // // program to convert decimal to binary

// // #include <stdio.h>

// // int main()
// // {

// //     long int decnum, binnum, rev = 0, q = 1, rem, i = 1;

// //     printf("Enter the decimal number to convert: ");
// //     scanf("%ld", &decnum);

// //     while (q != 0)
// //     {
// //         q = decnum / 2;
// //         rem = decnum % 2;
// //         decnum = q;
// //         rev = rev + rem * i;
// //         i *= 10;
// //     }

// //     printf("The reversed binary number is %ld", rev);

// //     return 0;
// // }

// // print 1-10 without using any types of loops

// #include<stdio.h>

// int main(){
//     int num=1;

//     loop1:
//     printf("%d \t",num);
//     num++;

//     if(num<=10){
//         goto loop1;
//     }
// }

// program to find all the prime numbers less than hundred...

// #include <stdio.h>

// int main() {

//     int i, j, prime;

//     for (i = 2; i < 100; i++) {
//         prime = 1;

//         for (j = 2; j < i; j++) {
//             if (i % j == 0) {
//                 prime = 0;
//                 break;
//             }
//         }

//         if (prime) {
//             printf("%d\t", i);
//         }
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i, j, p;

//     for (i = 0; i <= 4; i++)
//     {
//         for (j = 0; j <= i; j++)
//         {
//             p = (i + j) + 1;
//             printf("%d \t", p);
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
  float num = 121341;
  printf("The size of num is %d",sizeof(num));
  return 0;
}