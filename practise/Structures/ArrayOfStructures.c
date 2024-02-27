// // // // #include <stdio.h>

// // // // struct Student
// // // // {
// // // //     char name[50];
// // // //     int age;
// // // //     int class;
// // // // };

// // // // int main()
// // // // {

// // // //     struct Student stds[2];

// // // //     for (int i = 0; i < 2; i++)
// // // //     {
// // // //         printf("Enter the details of the students %d: \n", i + 1);
// // // //         printf("Name: ");
// // // //         scanf("%s",&stds[i].name);

// // // //         printf("Age: ");
// // // //         scanf("%d", &stds[i].age);
// // // //         printf("Class: ");
// // // //         scanf("%d", &stds[i].class);
// // // //     }

// // // //     printf("The details of students are :\n");
// // // //     for(int i=0; i<2; i++){
// // // //         printf("Student [%d]\n",i+1);
// // // //         printf("Name: %s\n",stds[i].name);
// // // //         printf("Age: %d\n",stds[i].age);
// // // //         printf("Class: %d\n",stds[i].class);
// // // //     }

// // // //     return 0;

// // // // }

// // // #include <stdio.h>

// // // struct StudentMarks
// // // {
// // //     char name[100];
// // //     int roll;
// // //     int marks[3];
// // // };
// // // int main()
// // // {
// // //     int i, j, total=0;
// // //     struct StudentMarks smarks[2];

// // //     for (i = 0; i < 2; i++)
// // //     {
// // //         printf("Enter the name of %d student: ", i + 1);
// // //         scanf("%s", &smarks[i].name);
// // //         printf("Roll no: ");
// // //         scanf("%d", &smarks[i].roll);
// // //         for (j = 0; j < 3; j++)
// // //         {
// // //             printf("Enter the marks of %d subject", j + 1);
// // //             scanf("%d", &smarks[i].marks[j]);
// // //             total+=smarks[i].marks[i];
// // //         }
// // //     }

// // //     // for showing the data
// // //     printf("Name\t Age\t Marks1\t Marks2\t Marks3\t\n");
// // //     for (i=0;i<2;i++){
// // //         printf("%s\t %d\t %d\t %d\t %d\t\n", smarks[i].name,smarks[i].roll, smarks[i].marks[0], smarks[i].marks[1],smarks[i].marks[2]);
// // //     }

// // //     return 0;
// // // }

// // // nested structure

// // #include<stdio.h>

// // struct person{
// //     char name[100];
// //     struct address{
// //         char tole[100];
// //         int ward;
// //     }add;
// //     int id;
// // }per;

// // int main(){
// //    struct add={"Jhapa", 8};

// // }

// // passing whole structure to a function

// #include <stdio.h>

// struct employee {
//     char name[100];
//     int age;
// };

// void display(struct employee e){
//     printf("\nName\tage\t \n");
//     printf("\n%s %d\n",e.name, e.age);
// }

// int main(){
//     struct employee emp;
//     printf("Enter name and age of employee\n");
//     scanf("%s %d", &emp.name, &emp.age);
//     display(emp);
//     return 0;
// }

// array of structure into a function

#include <stdio.h>

struct employee
{
    char name[100];
    int id;
};

void display(struct employee e[])
{
    printf("\nName\tID\t\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%s\t%d\n", e[i].name, e[i].id);
    }
}

int main()
{
    struct employee emp[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter name:");
        scanf("%s", &emp[i].name);
        printf("Enter id:");
        scanf("%d", &emp[i].id);
    }

    display(emp);

    return 0;
}