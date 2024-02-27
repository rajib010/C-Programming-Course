#include <stdio.h>
int main()
{
    int i=1,sum=0;
    do
    {
        sum+=i;
        i++;
    } while (i<=100);
    
    printf("The sum of first 100 elements is %d",sum);
return 0;
}
