#include<stdio.h>
#include<string.h>

struct student{
    char name[50];
    int age;
};


void printStudent(struct student *std1){
    printf("Enter your name : ");
    scanf("%s", &std1->name);
    printf("Name : %s",std1->name);
}

int main(){
    struct student std;
    printStudent(&std);
    return 0;
}