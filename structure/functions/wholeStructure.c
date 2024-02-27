#include<stdio.h>
#include<string.h>

struct Student
{
    char name[50];
    int age;
};

void printStudent(struct Student std1)
{
    printf("name: %s \n age: %d \n ", std1.name, std1.age);
}

int main(){
    struct Student std;
    strcpy(std.name, "name");
    std.age = 20;
    printStudent(std);
    return 0;
}