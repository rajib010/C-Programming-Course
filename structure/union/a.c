#include<stdio.h>

union new_union
{
    int a;
    float b;
};

int main(){
    union new_union my_union;
    my_union.a=1;
    printf("%d\n", my_union.a);
    my_union.b=2.001;
    printf("%f\n ", my_union.b);

    printf("%d", my_union.a);

    return 0;
}