// // // // // // // // // // // program to take the data of number of students and display them

// // // // // // // // // // #include <stdio.h>

// // // // // // // // // // struct Student
// // // // // // // // // // {
// // // // // // // // // //     char name[50];
// // // // // // // // // //     int roll_no;
// // // // // // // // // //     int marks;
// // // // // // // // // //     char remarks;
// // // // // // // // // // };

// // // // // // // // // // int main()
// // // // // // // // // // {

// // // // // // // // // //     int n, i;
// // // // // // // // // //     printf("Enter the number of students: ");
// // // // // // // // // //     scanf("%d", &n);
// // // // // // // // // //     struct Student student[n];

// // // // // // // // // //     // taking the records of students
// // // // // // // // // //     for (i = 0; i < n; i++)
// // // // // // // // // //     {
// // // // // // // // // //         printf("Enter the details of student%d\n", i + 1);
// // // // // // // // // //         printf("Enter the name, Rollno, Marks & Remarks of Student: ");
// // // // // // // // // //         scanf("%s %d %d %c", &student[i].name, &student[i].roll_no, &student[i].marks, &student[i].remarks);
// // // // // // // // // //     }

// // // // // // // // // //     // displaying the records of students

// // // // // // // // // //     printf("\nName\t Rollno\t Marks\t Remarks\n");
// // // // // // // // // //     for (i = 0; i < n; i++)
// // // // // // // // // //     {
// // // // // // // // // //         printf("\n%s\t %d\t %d\t %c\n", student[i].name, student[i].roll_no, student[i].marks, student[i].remarks);
// // // // // // // // // //     }

// // // // // // // // // //     return 0;
// // // // // // // // // // }

// // // // // // // // // #include <stdio.h>

// // // // // // // // // struct Employee
// // // // // // // // // {
// // // // // // // // //     char name[50];
// // // // // // // // //     char address[50];
// // // // // // // // //     int age;
// // // // // // // // //     float salary;
// // // // // // // // // };

// // // // // // // // // int main()
// // // // // // // // // {
// // // // // // // // //     int n, i;
// // // // // // // // //     float avgSalary = 0;

// // // // // // // // //     printf("Enter the number of employee: ");
// // // // // // // // //     scanf("%d", &n);
// // // // // // // // //     struct Employee employee[n];

// // // // // // // // //     // taking the records of Employees
// // // // // // // // //     for (i = 0; i < n; i++)
// // // // // // // // //     {
// // // // // // // // //         printf("\nEnter the details of employee%d\n", i + 1);
// // // // // // // // //         printf("Enter the name, address, age & Salary: ");
// // // // // // // // //         scanf("%s %s %d %f", &employee[i].name, &employee[i].address, &employee[i].age, &employee[i].salary);
// // // // // // // // //     }

// // // // // // // // //     for (i = 0; i < n; i++)
// // // // // // // // //     {
// // // // // // // // //         avgSalary += employee[i].salary;
// // // // // // // // //         avgSalary = avgSalary / n;
// // // // // // // // //     }

// // // // // // // // //     printf("\nThe average salary of the employee is %f\n", avgSalary);
// // // // // // // // // }

// // // // // // // // #include <stdio.h>

// // // // // // // // struct Account
// // // // // // // // {
// // // // // // // //     int accNum;
// // // // // // // //     char name[50];
// // // // // // // //     int balance;
// // // // // // // // };

// // // // // // // // void showCustomers(struct Account account)
// // // // // // // // {
// // // // // // // //     if (account.balance < 100)
// // // // // // // //     {
// // // // // // // //         printf("\nAccount Number: %d, Name: %s, Balance: %d\n", account.accNum, account.name, account.balance);
// // // // // // // //     }
// // // // // // // // }

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     int n, i, choice, accNum, withdraw, deposit;

// // // // // // // //     printf("Enter the number of customers: ");
// // // // // // // //     scanf("%d", &n);
// // // // // // // //     struct Account account[n];

// // // // // // // //     printf("\nEnter the details of customers \n");
// // // // // // // //     // Taking the records of customers
// // // // // // // //     for (i = 0; i < n; i++)
// // // // // // // //     {
// // // // // // // //         for (i = 0; i < n; i++)
// // // // // // // //         {
// // // // // // // //             printf("\nEnter the details of customers %d\n", i + 1);
// // // // // // // //             printf("Enter the Account Number, Name, and Balance: ");
// // // // // // // //             scanf("%d", &account[i].accNum);
// // // // // // // //             scanf(" %49[^\n]", account[i].name); // Read the name with %49[^\n]
// // // // // // // //             scanf("%d", &account[i].balance);
// // // // // // // //         }
// // // // // // // //     }

// // // // // // // //     // Displaying the customers
// // // // // // // //     for (i = 0; i < n; i++)
// // // // // // // //     {
// // // // // // // //         showCustomers(account[i]);
// // // // // // // //     }

// // // // // // // //     // Withdrawing or Depositing amount
// // // // // // // //     printf("\nEnter your choice (1) Withdraw, (2) Deposit: ");
// // // // // // // //     scanf("%d", &choice);

// // // // // // // //     switch (choice)
// // // // // // // //     {
// // // // // // // //     case 1:
// // // // // // // //         printf("Enter your Account number: ");
// // // // // // // //         scanf("%d", &accNum);
// // // // // // // //         for (i = 0; i < n; i++)
// // // // // // // //         {
// // // // // // // //             if (account[i].accNum == accNum)
// // // // // // // //             {
// // // // // // // //                 printf("Enter the amount you want to Withdraw: ");
// // // // // // // //                 scanf("%d", &withdraw);
// // // // // // // //                 if (account[i].balance < withdraw)
// // // // // // // //                 {
// // // // // // // //                     printf("Insufficient Balance\n");
// // // // // // // //                 }
// // // // // // // //                 else
// // // // // // // //                 {
// // // // // // // //                     account[i].balance -= withdraw;
// // // // // // // //                     printf("Withdrawal successful. Updated balance: %d\n", account[i].balance);
// // // // // // // //                 }
// // // // // // // //             }
// // // // // // // //         }
// // // // // // // //         break;
// // // // // // // //     case 2:
// // // // // // // //         printf("Enter your Account number: ");
// // // // // // // //         scanf("%d", &accNum);
// // // // // // // //         for (i = 0; i < n; i++)
// // // // // // // //         {
// // // // // // // //             if (account[i].accNum == accNum)
// // // // // // // //             {
// // // // // // // //                 printf("Enter the amount you want to Deposit: ");
// // // // // // // //                 scanf("%d", &deposit);
// // // // // // // //                 account[i].balance += deposit;
// // // // // // // //                 printf("Deposit successful. Updated balance: %d\n", account[i].balance);
// // // // // // // //             }
// // // // // // // //         }
// // // // // // // //         break;

// // // // // // // //     default:
// // // // // // // //         printf("Invalid choice. Exiting...\n");
// // // // // // // //         break;
// // // // // // // //     }

// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // // program to find who has the highest balance in the bank

// // // // // // // #include <stdio.h>

// // // // // // // struct Account
// // // // // // // {
// // // // // // //     int accNum;
// // // // // // //     char name[50];
// // // // // // //     int balance;
// // // // // // // };

// // // // // // // int main()
// // // // // // // {
// // // // // // //     int i, n, highestBalance = 0;
// // // // // // //     printf("Enter the number of customers: ");
// // // // // // //     scanf("%d", &n);
// // // // // // //     struct Account account[n];
// // // // // // //     printf("\nEnter the details of Customers: \n");
// // // // // // //     for (i = 0; i < n; i++)
// // // // // // //     {
// // // // // // //         printf("Account Number: \n");
// // // // // // //         scanf("%d", &account[i].accNum);
// // // // // // //         printf("\nName: \n");
// // // // // // //         scanf("%s", &account[i].name);
// // // // // // //         printf("\nBalance: \n");
// // // // // // //         scanf("%d", &account[i].balance);
// // // // // // //     }
// // // // // // //     printf("\nThe highest Balance is of: \n");
// // // // // // //     for (i = 0; i < n; i++)
// // // // // // //     {
// // // // // // //         if (account[i].balance > highestBalance)
// // // // // // //         {
// // // // // // //             highestBalance = account[i].balance;
// // // // // // //         }
// // // // // // //     }

// // // // // // //     for (i = 0; i < n; i++)
// // // // // // //     {
// // // // // // //         if (account[i].balance == highestBalance)
// // // // // // //         {
// // // // // // //             printf("%s %d", account[i].name, account[i].accNum);
// // // // // // //         }
// // // // // // //     }
// // // // // // // }

// // // // // // #include <stdio.h>

// // // // // // struct Student
// // // // // // {
// // // // // //     char name[50];
// // // // // //     int roll_no;
// // // // // //     int marks[3];
// // // // // // };
// // // // // // int main()
// // // // // // {
// // // // // //     int i, n, j, k, total1, total2;
// // // // // //     printf("Enter the total number of students: ");
// // // // // //     scanf("%d", &n);
// // // // // //     struct Student student[n], temp;

// // // // // //     // taking the student details
// // // // // //     printf("\nEnter student details: \n");
// // // // // //     for (i = 0; i < n; i++)
// // // // // //     {
// // // // // //         printf("\nName: \n");
// // // // // //         scanf("%s", &student[i].name);
// // // // // //         printf("\nRoll No: \n");
// // // // // //         scanf("%d", &student[i].roll_no);
// // // // // //         printf("\nMarks of three subjects: \n");
// // // // // //         for (j = 0; j < 3; j++)
// // // // // //         {
// // // // // //             scanf("%s", &student[i].marks[j]);
// // // // // //         }
// // // // // //     }

// // // // // //     // total marks calculating

// // // // // //     for (i = 0; i < n - 1; i++)
// // // // // //     {
// // // // // //         for (j = 0; j < n - 1 - i; j++)
// // // // // //         {
// // // // // //             total1 = total2 = 0;
// // // // // //             for (k = 0; k < 3; k++)
// // // // // //             {
// // // // // //                 total1 += student[j].marks[k];
// // // // // //                 total2 += student[j + 1].marks[k];
// // // // // //             }

// // // // // //             if (total1 > total2)
// // // // // //             {
// // // // // //                 temp = student[j];
// // // // // //                 student[j] = student[j + 1];
// // // // // //                 student[j + 1] = temp;
// // // // // //             }
// // // // // //         }
// // // // // //     }

// // // // // //     printf("\n Sorted list\n");
// // // // // //     for (i = 0; i < n; i++)
// // // // // //     {
// // // // // //         printf("Name: %s\n", student[i].name);
// // // // // //         printf("Roll no: %d\n", student[i].roll_no);
// // // // // //         printf("Marks in three subjects: \n");
// // // // // //         for (j = 0; j < n; j++)
// // // // // //         {
// // // // // //             printf("Name: %d\n", student[i].marks[j]);
// // // // // //         }
// // // // // //     }
// // // // // // }

// // // // // // arranging employees on the basis of their names

// // // // // #include <stdio.h>
// // // // // #include <string.h>
// // // // // #define n 2

// // // // // struct Employees
// // // // // {
// // // // //     char name[50];
// // // // //     char address[50];
// // // // //     int salary;
// // // // // };

// // // // // int main()
// // // // // {
// // // // //     struct Employees employee[n], temp;
// // // // //     int i, j;

// // // // //     printf("\nEnter Employee Details: \n");
// // // // //     for (i = 0; i < n; i++)
// // // // //     {
// // // // //         printf("Name: \n");
// // // // //         scanf("%s", &employee[i].name);
// // // // //         printf("Address: \n");
// // // // //         scanf("%s", &employee[i].address);
// // // // //         printf("Sa;ary: \n");
// // // // //         scanf("%d", &employee[i].salary);
// // // // //     }

// // // // //     for (i = 0; i < n - 1; i++)
// // // // //     {
// // // // //         for (j = 0; j < n - 1 - i; j++)
// // // // //         {
// // // // //             if (strcmp(employee[j].name, employee[j + 1].name) > 0)
// // // // //             {
// // // // //                 temp = employee[j];
// // // // //                 employee[j] = employee[j + 1];
// // // // //                 employee[j + 1] = temp;
// // // // //             }
// // // // //         }
// // // // //     }

// // // // //     printf("\nThe sorted list is \n");
// // // // //     printf("\nName \tAddress\tSalary");
// // // // //     for (i = 0; i < n; i++)
// // // // //     {
// // // // //         printf("\n%s\t%s\t%d\n", employee[i].name, employee[i].address, employee[i].salary);
// // // // //     }

// // // // //     return 0;
// // // // // }

// // // // // program to read student records and display the info of Bca faculty only

// // // // #include <stdio.h>
// // // // #include <string.h>

// // // // #define n 3

// // // // struct birthdate
// // // // {
// // // //     int day;
// // // //     char month[10];
// // // //     int year;
// // // // };

// // // // struct Student
// // // // {
// // // //     int roll_no;
// // // //     char name[50];
// // // //     char faculty[50];
// // // //     struct birthdate dob;
// // // // };

// // // // int main()
// // // // {
// // // //     struct Student student[n];
// // // //     int i, j;
// // // //     printf("\nEnter student details: \n");
// // // //     for (i = 0; i < n; i++)
// // // //     {
// // // //         printf("Roll no: ");
// // // //         scanf("%d", &student[i].roll_no);
// // // //         printf("Name: ");
// // // //         scanf("%s", &student[i].name);
// // // //         printf("Faculty: ");
// // // //         scanf("%s", &student[i].faculty);
// // // //         printf("Birth Day: ");
// // // //         scanf("%d", &student[i].dob.day);
// // // //         printf("Birth Month: ");
// // // //         scanf("%s", &student[i].dob.month);
// // // //         printf("Birth Year: ");
// // // //         scanf("%d", &student[i].dob.year);
// // // //     }
// // // // printf("The students in BCA faculty are: \nName\tRollNo");
// // // //     for (i = 0; i < n; i++)
// // // //     {
// // // //         if (strcmp(student[i].faculty, "BCA") == 0){
// // // //             printf("\n%s\t %d \n", student[i].name, student[i].roll_no);
// // // //         }
// // // //     }
// // // // }

// // // // program to take the details of 5 people and arragne them in ascending order

// // // #include <stdio.h>
// // // #define n 3

// // // struct People
// // // {
// // //     int age;
// // //     char name[50];
// // //     char sex[1];
// // // };

// // // int main()
// // // {
// // //     struct People people[n], temp;
// // //     int i, j;
// // //     printf("\nEnter people details: \n");
// // //     for (i = 0; i < n; i++)
// // //     {
// // //         printf("Name: ");
// // //         scanf("%s", &people[i].name);
// // //         printf("Age: ");
// // //         scanf("%d", &people[i].age);
// // //         printf("Sex: ");
// // //         scanf("%s", &people[i].sex);
// // //     }
// // //     // arrange them in ascending order of age
// // //     for (i = 0; i < n - 1; i++)
// // //     {
// // //         for (j = 0; j < n - 1 - i; j++)
// // //         {
// // //             if (people[j].age > people[j + 1].age)
// // //             {
// // //                 temp = people[j];
// // //                 people[j] = people[j + 1];
// // //                 people[j + 1] = temp;
// // //             }
// // //         }
// // //     }
// // //     // displaying them
// // //     printf("\nPeople details: \n");
// // //     printf("\nName\tAge\tSex\n");
// // //     for (i = 0; i < n; i++)
// // //     {
// // //         printf("\n%s\t%d\t%c\n", people[i].name, people[i].age, people[i].sex);
// // //     }
// // //     return 0;
// // // }

// // #include <stdio.h>
// // #define n 5
// // int i, j;

// // struct Employee
// // {
// //     char name[50];
// //     int id;
// //     int salary;
// // };

// // void readEmployee(struct Employee e[])
// // {
// //     printf("\nEnter the details of Employees.\n");
// //     for (i = 0; i < n; i++)
// //     {
// //         printf("Name: ");
// //         scanf("%s", &e[i].name);
// //         printf("Id: ");
// //         scanf("%d", &e[i].id);
// //         printf("Salary: ");
// //         scanf("%d", &e[i].salary);
// //     }
// // };
// // void displayEmployee(struct Employee e[])
// // {
// //     printf("\nThe details of Employees are\n");
// //     printf("\nName\tAge\tSalary");
// //     for (i = 0; i < n; i++)
// //     {
// //         printf("\n%s\t%d\t%d", e[i].name, e[i].id, e[i].salary);
// //     }
// // };

// // int main()
// // {
// //     struct Employee emp[n];
// //     readEmployee(emp);
// //     displayEmployee(emp);
// //     return 0;
// // }

// // menu-driven program that does the jobs specified

// #include <stdio.h>
// #define n 5

// struct Student
// {
//     char name[50];
//     int id;
// };

// int main()
// {
//     int i, choice;
//     struct Student student[n];

//     printf("\nSelect What You Want To Do...\n(1)Enter Student Information\n(2)Display Student Information (3)Exit");
//     scanf("%d", &choice);

//     switch (choice)
//     {
//     case 1:
//         printf("\nEnter student Details\n");
//         for (i = 0; i < n; i++)
//         {
//             printf("Name: ");
//             scanf("%s", &student[i].name);
//             printf("Id: ");
//             scanf("%d", &student[i].id);
//         }
//         break;
//     case 2:
//         printf("\nDisplaying Student Information\n");
//         printf("\nId\tName\n");
//         for(i=0;i<n;i++){
//             printf("%d %s", student[i].id, student[i].name);
//         }
//     case 3:
//         exit(0);

//     default:
//     {
//         printf("Invalid Choice !!!!");
//     }
//     }

//     return 0;
// }