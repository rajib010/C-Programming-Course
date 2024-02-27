#include <stdio.h>
#include<math.h>

int main()
{
    // while (n <= 5)

    // {
    //     printf("%d\n", n);




























































































































































































    
    //     n++;
    // }

    // int digit,rem,sum;
    // printf("Enter any number : ");
    // scanf("%d",&digit);
    // while (n !=0);
    // {
    //    rem=digit%10;
    //    sum+=rem;
    //    digit/=10;
    // }
    // printf("the sum of digits of numbers is : %d",sum);

    int num,rem,sum;
    printf("Enter number to be checked: ");
    scanf("%d",&num);
   int temp=num;

    while (num!=0)
    {
        rem=num%10;
        sum+=pow(rem,3);
        num/=10;
    
    if (temp==sum){
        printf("The given number is armstrong");
    }else{
        printf("not so..");
    }
    
    return 0;
}}
//palindrome number checking...