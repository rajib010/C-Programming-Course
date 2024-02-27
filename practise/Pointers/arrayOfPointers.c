// // example to display the array of pointers

// #include<stdio.h>

// int main(){
//     int a=5,b=6,c=7,d=8,e=9;
//     int *p[5];
//     int i;
//     p[0]=&a;
//     p[1]=&b;
//     p[2]=&c;
//     p[3]=&d;
//     p[4]=&e;

//     for (i=0;i<5;i++){
//         printf("\n p[%d]=%d \n",i,*p[i]);
//     }
//     return 0;
// }

// another example

#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p[5];

    for (int i = 0; i < 5; i++)
    {
        p[i] = &a[i];
        printf("\n p[%d]=%d\n", i, *p[i]);
    }

    return 0;
}