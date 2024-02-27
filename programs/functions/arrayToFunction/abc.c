// #include<stdio.h>

// #define N 10

// int sum(int a[]);

// int main(){
//     int i, num[N],s;
//     printf("Enter the elements of array \n");
//     for(i =0;i<N;i++){
//         scanf("%d", &num[i]);
//         printf("\n");
//     }
//     s=sum(num);
//     printf("\n The sum of the given elments of array is %d",s);
//     return 0;
// }
// int sum(int a[]){
//     int i,sum;
//     for(i=0;i<N;i++){
//         sum+=a[i];
//     }
//     return sum;
// }

#include <stdio.h>

#define N 10

int sum(int a[]);

int main()
{
    int i, num[N], s;
    printf("Enter the elements of array \n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
        printf("\n");
    }
    s = largest(num);
    printf("\n The largest number of the array is %d", s);
    return 0;
}
int largest(int a[])
{
    int largest=a[0];
    for(int i=0;i<N;i++){
        if(a[i]>largest){
            largest= a[i];
        }
    }
    return largest;
}
