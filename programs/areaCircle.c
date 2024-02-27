#include <stdio.h>
#include <math.h>
#define pi 3.14
int main()
{
    int r;
    float vol;
    printf("Enter the radius of circle: ");
    scanf("%d", &r);

    vol = (4 * pi * (r ^ 3) )/ 3;

    printf("The vol. of the circle is %f", vol);
} 