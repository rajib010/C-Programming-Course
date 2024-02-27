#include <stdio.h>

struct Student
{
    int id;
    char name[50];
    int age;
};

int main()
{
    struct Student std[2], *sptr;
    sptr = std;
    for (sptr = std; sptr < std + 2; sptr++){
        printf("Enter id: ");
        scanf("%d", &sptr->id);
        printf("Enter your name: ");
        scanf("%s", &sptr->name);
        printf("Enter your age: ");
        scanf("%d", &sptr->age);
    }
    for (sptr = std; sptr < std + 2; sptr++){
        printf("Student record \n Id: %d \n name: %s \n age: %d \n ", sptr->id, sptr->name, sptr->age);
    }
    return 0;
}