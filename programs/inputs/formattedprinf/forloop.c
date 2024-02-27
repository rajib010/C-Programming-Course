#include<stdio.h>

int main(){

    // for(int i=1;i<=10;i++){
    //     printf("%d \n",i);
    // }

    //sum of the natural numbers 

    int i, num;
    int sum=1;

    printf("Enter the value of num  ; ");
    scanf("%d", &num);

    for(i=1;i<=num;i++){
        sum +=i;
    }
    printf("Sum %d",sum);
    
}