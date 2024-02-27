#include<stdio.h>

int main(){

    int arr[]={1,2,3,4,5,6};
    int *ptr1=&arr[0]; //initialized first element of address
    int *ptr2=&arr[1];

    printf("%d",*ptr1>*ptr2?*ptr1:*ptr2);
    // printf("The value of ptr is %d\n",*ptr);
    // ptr ++;
    // printf("The increased value is %d\n", *ptr);
    // ptr--;
    // printf("The value of ptr after increment is  %d\n",*ptr); 
    return 0;

}