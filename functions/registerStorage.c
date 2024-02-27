#include<stdio.h>

int main(){
    register int counter = 0;
    for(int i=0;i<=100;i++){
        counter++;
    }
    printf("Counter %d.",counter);
    return 0;
}

