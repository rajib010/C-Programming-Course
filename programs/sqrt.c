#include<stdio.h>
#include<math.h>


int main(){
    int number;
    float result;

    printf("Enter a number :");
    scanf("%d",&number);

    result=sqrt(number);

    printf("The square root of the number is %f", result);
    return 0;
}