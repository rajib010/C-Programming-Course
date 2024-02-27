// this is a basic example of pointer

#include<stdio.h>

int main(){
    int num=10;
    int *p;
    printf("The value of num is %d",num);
    p=&num;
    printf("The value address of num is %u",&num);
    printf("The value address hold by p is %d",p);
    printf("The value hold by p is %d",*p);

    return 0;
}