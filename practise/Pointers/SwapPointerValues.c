// this is a program where we will try to swap the pointer values

#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    printf("The values of a and b are %d %d\n", a, b);
    int *pa, *pb, *pt;
    pt = &a;
    pa = &b;
    pb = pt;
    printf("The values after being changed are a=%d b=%d\n", *pa,*pb);
    return 0;
}