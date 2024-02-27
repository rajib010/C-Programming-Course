#include <stdio.h>

int main()
{
    int a = 10;
    int b=20;
    int *ptr1 = &a;
    int *ptr2=&b;

    // printf("The value of ptr is %d \n", *ptr);//gives normal value
    // ptr++;
    // printf("The increased value is %d\n", *ptr);//gives garbage value.
    // ptr--;
    // printf("The value after once decremented is %d",*ptr); //gives normal

    if(ptr1==ptr2){
        puts("Equal");
    }else{
        puts("not equal");
    }
    return 0;
}