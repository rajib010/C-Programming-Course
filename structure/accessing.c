// #include <stdio.h>
// #include <string.h>

// struct Student
// {
//     int id;
//     char name[50];
//     char gender;
//     int age;
//     int marks[5];
// };

// int main()
// {
//     // int n;
//     // printf("Enter the number of students: ");
//     // scanf("%d", &n);
//     // struct Student std[n];

//     // for (int i = 0; i < n; i++)
//     // {
//     //     printf("Enter id: ");
//     //     scanf("%d", &std[i].id);
//     //     printf("Enter your name: ");
//     //     scanf("%s", &std[i].name);
//     //     printf("Enter your gender: ");
//     //     scanf(" %c", &std[i].gender);
//     //     printf("Enter your age: ");
//     //     scanf("%d", &std[i].age);

//     // }

//     // for (int i = 0; i < n; i++)
//     // {
//     //     printf("Student record \n Id: %d \n name: %s \n gender: %c \n age: %d \n ", std[i].id, std[i].name, std[i].gender, std[i].age);
//     // }

//     struct Student std1;
//     std1.id = 1;
//     strcpy(std1.name, "raJiB");
//     std1.marks[0] = 90;
//     std1.marks[1] = 80;
//     std1.marks[2] = 70;
//     std1.marks[3] = 60;
//     std1.marks[4] = 50;

//         printf("Student record \n Id: %d \n name: %s \n gender: %c \n age: %d \n ", std1.id, std1.name, std1.gender, std1.age);
//         printf("The marks are : \n");
//         for(int i=0;i<5;i++){
//             printf("Marks of subject %d is %d\n",i+1,std1.marks[i]);
//         }

//     return 0;
// }

// nested structure

#include <stdio.h>
#include <string.h>


struct Address
{
    char street[50];
    char city[50];
    char state[50];
    int postalCode;
};
struct Person
{
    char name[50];
    int age;
    struct Address address;
};



int main()
{

    struct Person person1;

    person1.age = 10;
    strcpy(person1.name, "raJiB");
    strcpy(person1.address.city, "Kathmandu");
    strcpy(person1.address.state, "Bagmati");
    strcpy(person1.address.street, "Lokmarga");
    person1.address.postalCode = 44600;

    printf("Personal info \n name: %s \n age: %d \n city: %s \n state: %s \n street: %s \n postalCode: %d \n", person1.name, person1.age, person1.address.city, person1.address.state, person1.address.street, person1.address.postalCode);
}