#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    char empName[20];
    int empId;
    float empSalary;
};

int main()
{
    FILE *file;
    char filename[] = "employee_data.txt";
    int numberOfEmployees;

    file = fopen(filename, "w");

    if (file == NULL)
    {
        printf("Error in opening file\n");
        return 1;
    }

    printf("Enter the number of employees: ");
    scanf("%d", &numberOfEmployees);

    struct Employee emp;

    for (int i = 0; i < numberOfEmployees; i++)
    {
        printf("Enter the name of employee %d: ", i + 1);
        scanf("%s", emp.empName);
        printf("Enter the id of employee %d: ", i + 1);
        scanf("%d", &emp.empId);
        printf("Enter the salary of employee %d: ", i + 1);
        scanf("%f", &emp.empSalary);

        fprintf(file, "%s %d %f\n", emp.empName, emp.empId, emp.empSalary);
    }

    fclose(file);
    printf("Employee data written to file successfully in %s\n", filename);
}