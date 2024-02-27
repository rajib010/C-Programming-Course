#include<stdio.h>

int count(){
    static int count=0;
    count++;
    printf("Static count : %d\n",count);
}

int main(){
    count();
    count();
    count();
    return 0;
}

