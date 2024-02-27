#include<stdio.h>

int main(){
    int a=255;
    float num=9.6656531768126371718541547161613;
    int num1= 123456;
    char a[]="The name is Bond";
    // printf("%-10d",a);

    // printf("%+10d",a);
    // printf("% 10d",a);
    // printf("%010d",a);
    // printf("%o\n",a); converts to octal...
    // printf("%#x\n",a);
    // printf("%#e\n",num);
    printf("%.2f",num);
    printf("%.3s\n",a);
    return 0;
}