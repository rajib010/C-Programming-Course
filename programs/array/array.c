#include <stdio.h>

int main()
{
    // int num[5] = {10, 20, 30, 40, 50};
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d \t", num[i]);
    // }
int sum=0;
    int marks[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter thet marks %d:   ", i + 1);
        scanf("%d", &marks[i]);
    }
    printf("The sum of marks is : \n");
    for (int i = 0; i <= 4; i++)
    {
        sum=marks[i]+sum;

    }
    int average= sum/5;
    printf("%d \n",sum);
    printf("the average of marks is : %d", average);

    return 0;
}