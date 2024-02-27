#include <stdio.h>

int main()
{
    int fibonum, i = 1, prevterm = 0, nextterm = 1, fiboterms;
    printf("Enter the numbers of terms you want to print: ");
    scanf("%d", &fibonum);
    printf("Fibonacci series: ");

    do{
        printf("%d\t",prevterm);
        fiboterms=prevterm+nextterm;
        prevterm=nextterm;
        nextterm=fiboterms;
        i++;
    }while(i<=fibonum);

    return 0;
}