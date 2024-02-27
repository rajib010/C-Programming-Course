// #include <stdio.h>

// int main()
// {

//     int num, i, rev = 0, digit, temp;
//     printf("Enter a number : ");
//     scanf("%d", &num);
//     temp= num;

//     while(num!=0){
//         digit= num%10;
//         rev=rev*10+digit;
//         num=num/10;
//     }
//     if(temp==rev){
//         puts("The number is a palindrome number");
//     }else{
//         puts("Not palindrome...");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int digit,temp, num, rev = 0;

    puts("Enter the number: ");
    scanf("%d", &num);
    temp=num;   //store the num in temp for checking in the last

    while(num!=0){
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }

    if(rev==temp){
        puts("The given number is a palindrome number.");
    }else{
        puts("NOT PALINDROME!!!!");
    }
    return 0;
}