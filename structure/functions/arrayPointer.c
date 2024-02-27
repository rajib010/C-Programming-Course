// #include <stdio.h>
// #include <string.h>

// struct Person
// {
//     char name[50];
//     int age;
// };

// void printinfo(struct Person persons[], int num)
// {
//     for (int i = 0; i < num; i++)
//     {
//         printf("Name : %s  and Age: %i\n", persons[i].name, persons[i].age);
//     }
// }

// int main()
// {
//     struct Person persons[2];
//     for (int i = 0; i < 2; i++)
//     {
//         printf("Enter your name \n");
//         scanf("%s", &persons[i].name);
//         printf("Enter your age \n");
//         scanf("%d", &persons[i].age);
//     }
//     printinfo(persons, 2);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
struct Person
{
    char name[25];
    int age;
};

void printInfo(struct Person persons[], int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("Name is : %s", persons[i].name);
    }
}

int main()
{
    struct Person persons[2];
    for (int i = 1; i <= 2; i++)
    {
        printf("Enter your name: ");
        scanf("%s", &persons[i].name);
    }
    printInfo(persons, 2);

    return 0;
}