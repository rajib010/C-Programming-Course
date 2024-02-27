#include<stdio.h>

int main(){

    int arr[]={1,2,3,4,5};
    int *ptr= &arr;
    printf("The valye of ptr is %d \n", *ptr);

    ptr=ptr+2;
    printf("The increased value is %d\n", *ptr);//gives garbage value.

    ptr=ptr-1;
    printf("The value after once decremented is %d",*ptr); //gives normal

    return 0;
}