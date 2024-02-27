#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int age;
};

void printName(char personName[])
{
    printf("Name: %s \n", personName);
}

void printAge(int personAge)
{
    printf("Age: %d \n", personAge);
}

int main()
{
    struct Student std;
    strcpy(std.name, "Vikram");
    std.age = 20;
    printName(std.name);
    printAge(std.age);
    return 0;
}