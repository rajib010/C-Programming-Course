#include <stdio.h>

void changeNUmber(int *ptr)
{
    *ptr = 10;
}
 
int main()
{
    int a = 20;
    changeNUmber(&a);
    printf("Modified value : %u", a);
    return 0;
}
// {
//     int a=10,b=20;
//     int *p,*q,*t;

//     p=&a;
//     q=&b;

//     printf("the value of p and q before swapping is  %d %d \n",*p,*q);

//     t=p;
//     p=q;
//     q=t;

//     printf("The value of given element after swapping is %d %d", *p, *q);
//     return 0;
