#include <stdio.h>

#define SIZE 100

void input(float a[], int);
float sum(float a[], int);
float avg(float a[], int);

int main() {
    float a[SIZE], s, av;
    int n;

    printf("How many numbers? ");
    scanf("%d", &n);

    printf("Enter the numbers: ");
    input(a, n);
    s = sum(a, n);
    av = avg(a, n);

    printf("Sum = %f\n", s);
    printf("Average = %f\n", av);

    return 0;
}

void input(float a[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%f", &a[i]);
    }
}

float sum(float a[], int n) {
    float s = 0;
    for (int i = 0; i < n; i++) {
        s += a[i];
    }
    return s;
}

float avg(float a[], int n) {
    float av;
    av = sum(a, n) / n;
    return av;
}