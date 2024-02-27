// // // // // // // // // // // // // // //program to write something to a file

// // // // // // // // // // // // // // //  #include <stdio.h>

// // // // // // // // // // // // // // // int main()
// // // // // // // // // // // // // // // {
// // // // // // // // // // // // // // //     FILE *fp;
// // // // // // // // // // // // // // //     fp = fopen("text.txt", "w");
// // // // // // // // // // // // // // //     if (fp == NULL)
// // // // // // // // // // // // // // //     {
// // // // // // // // // // // // // // //         printf("Error in opening file!!!!!");
// // // // // // // // // // // // // // //     }
// // // // // // // // // // // // // // //     printf("\nfile is created");
// // // // // // // // // // // // // // //     fputs("I study BCA", fp);
// // // // // // // // // // // // // // //     fclose(fp);
// // // // // // // // // // // // // // // }

// // // // // // // // // // // // // // // program to read something written from a file

// // // // // // // // // // // // // // #include<stdio.h>

// // // // // // // // // // // // // // int main(){
// // // // // // // // // // // // // //     FILE *fp;
// // // // // // // // // // // // // //     char s[100];
// // // // // // // // // // // // // //     fp=fopen("text.txt", "r");
// // // // // // // // // // // // // //     if(fp==NULL){
// // // // // // // // // // // // // //         printf("Error opening the file");
// // // // // // // // // // // // // //     }
// // // // // // // // // // // // // //     fgets(s,100,fp);
// // // // // // // // // // // // // //     printf("\n The text from the file is \n %s",s);
// // // // // // // // // // // // // //     fclose(fp);
// // // // // // // // // // // // // // }

// // // // // // // // // // // // // // program to open a file and add some text to it

// // // // // // // // // // // // // #include <stdio.h>

// // // // // // // // // // // // // int main()
// // // // // // // // // // // // // {
// // // // // // // // // // // // //     FILE *fp;
// // // // // // // // // // // // //     fp = fopen("text.txt", "a");
// // // // // // // // // // // // //     if (fp == NULL)
// // // // // // // // // // // // //     {
// // // // // // // // // // // // //         printf("\nCannot open file!!!\n");
// // // // // // // // // // // // //     }
// // // // // // // // // // // // //     fputs("@TU", fp);

// // // // // // // // // // // // // create a new file and enter some details until the user presses enter key,

// // // // // // // // // // // // #include <stdio.h>

// // // // // // // // // // // // int main()
// // // // // // // // // // // // {
// // // // // // // // // // // //     FILE *fp;
// // // // // // // // // // // //     char fileName[50];
// // // // // // // // // // // //     char c;
// // // // // // // // // // // //     printf("Enter file name: ");
// // // // // // // // // // // //     scanf("%s", &fileName);
// // // // // // // // // // // //     fp = fopen(fileName, "w");
// // // // // // // // // // // //     if (fp == NULL)
// // // // // // // // // // // //     {
// // // // // // // // // // // //         printf("Cannot open file.");
// // // // // // // // // // // //     }
// // // // // // // // // // // //     getchar();
// // // // // // // // // // // //     while ((c = getchar()) != EOF)
// // // // // // // // // // // //     {
// // // // // // // // // // // //         fputc(c, fp);
// // // // // // // // // // // //     }
// // // // // // // // // // // //     fclose(fp);
// // // // // // // // // // // //     return 0;
// // // // // // // // // // // // }

// // // // // // // // // // // #include <stdio.h>

// // // // // // // // // // // int main()
// // // // // // // // // // // {
// // // // // // // // // // //     FILE *fp;
// // // // // // // // // // //     char c;
// // // // // // // // // // //     fp = fopen("text.txt", "r");
// // // // // // // // // // //     if (fp == NULL)
// // // // // // // // // // //     {
// // // // // // // // // // //         printf("Cannot open the file!!!");
// // // // // // // // // // //     }

// // // // // // // // // // //     while ((c = fgetc(fp)) != EOF)
// // // // // // // // // // //     {
// // // // // // // // // // //         putchar(c);
// // // // // // // // // // //     }

// // // // // // // // // // //     fclose(fp);
// // // // // // // // // // //     return 0;
// // // // // // // // // // // }

// // // // // // // // // // #include <stdio.h>

// // // // // // // // // // int main()
// // // // // // // // // // {
// // // // // // // // // //     FILE *sfp, *dfp;
// // // // // // // // // //     char c;
// // // // // // // // // //     char sourceFile[30], destinationFile[30];
// // // // // // // // // //     printf("Enter source filename: ");
// // // // // // // // // //     scanf("%s", &sourceFile);
// // // // // // // // // //     printf("Enter destination filename: ");
// // // // // // // // // //     scanf("%s", &destinationFile);

// // // // // // // // // //     sfp = fopen(sourceFile, "r");
// // // // // // // // // //     if (sfp == NULL)
// // // // // // // // // //     {
// // // // // // // // // //         printf("Cannot open source file");
// // // // // // // // // //     }
// // // // // // // // // //     dfp = fopen(destinationFile, "w");
// // // // // // // // // //     if (dfp == NULL)
// // // // // // // // // //     {
// // // // // // // // // //         printf("Cannot open destination file");
// // // // // // // // // //     }
// // // // // // // // // //     printf("Copying....\n");
// // // // // // // // // //     while ((c = fgetc(sfp)) != EOF)
// // // // // // // // // //     {
// // // // // // // // // //         fputc(c, dfp);
// // // // // // // // // //     }
// // // // // // // // // //     printf("Copied successfully!!!!");
// // // // // // // // // //     fclose(sfp);
// // // // // // // // // //     fclose(dfp);
// // // // // // // // // //     return 0;
// // // // // // // // // // }

// // // // // // // // // // given a text file create another file deleting vowels

// // // // // // // // // #include <stdio.h>

// // // // // // // // // int main()
// // // // // // // // // {
// // // // // // // // //     FILE *sfp, *dfp;
// // // // // // // // //     char c;
// // // // // // // // //     char sourceFile[] = "text.txt";
// // // // // // // // //     char destinationFile[] = "text2.txt";

// // // // // // // // //     sfp = fopen(sourceFile, "r");
// // // // // // // // //     if (sfp == NULL)
// // // // // // // // //     {
// // // // // // // // //         printf("Cannot open Source File!!!!");
// // // // // // // // //     }
// // // // // // // // //     dfp = fopen(destinationFile, "w");
// // // // // // // // //     if (dfp == NULL)
// // // // // // // // //     {
// // // // // // // // //         printf("Cannot open Destination File!!!!");
// // // // // // // // //     }

// // // // // // // // //     while ((c = getc(sfp)) != EOF)
// // // // // // // // //     {
// // // // // // // // //         if ((c != 'a') && (c != 'e') && (c != 'i') && (c != 'o') && (c != 'u') && (c != 'A') && (c != 'E') && (c != 'O') && (c != 'I') && (c != 'U'))
// // // // // // // // //         {
// // // // // // // // //             fputc(c, dfp);
// // // // // // // // //         }
// // // // // // // // //     }
// // // // // // // // //     printf("Completed copying to the file");
// // // // // // // // //     return 0;
// // // // // // // // // }

// // // // // // // // // create a file and enter the details of employees

// // // // // // // // #include <stdio.h>

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     FILE *fp;
// // // // // // // //     char name[30], address[30];
// // // // // // // //     int age;
// // // // // // // //     fp = fopen("Employee.txt", "w");
// // // // // // // //     if (fp == NULL)
// // // // // // // //     {
// // // // // // // //         printf("Cannot open file");
// // // // // // // //     }
// // // // // // // //     printf("Enter the details of employees\n");
// // // // // // // //     printf("Name: \t Address: \t Age:\n");
// // // // // // // //     scanf("%s %s %d", &name, &address, &age);

// // // // // // // //     printf("Writing data into the file\n");
// // // // // // // //     fprintf(fp, "Name:%s\nAddress:%s\nAge:%d\n", name, address, age);
// // // // // // // //     printf("Completed");
// // // // // // // //     fclose(fp);
// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // // create a vehicle owner file containing their information, and display the information

// // // // // // // #include <stdio.h>
// // // // // // // #define n 3

// // // // // // // struct Owner
// // // // // // // {
// // // // // // //     char name[50];
// // // // // // //     char address[50];
// // // // // // //     int telephone;
// // // // // // //     char vehicleNo[50];
// // // // // // //     int licenseNo;
// // // // // // // };

// // // // // // // int main()
// // // // // // // {
// // // // // // //     int i;
// // // // // // //     struct Owner owner[n], own[n];

// // // // // // //     FILE *fp;
// // // // // // //     fp = fopen("ownerInfo.txt", "w");
// // // // // // //     if (fp == NULL)
// // // // // // //     {
// // // // // // //         printf("Error opening File!!!");
// // // // // // //     }

// // // // // // //     for (i = 0; i < n; i++)
// // // // // // //     {
// // // // // // //         printf("\nDetails of Owner %d\n", i + 1);
// // // // // // //         printf("Name: ");
// // // // // // //         scanf("%s", &owner[i].name);
// // // // // // //         printf("Address: ");
// // // // // // //         scanf("%s", &owner[i].address);
// // // // // // //         printf("Telephone: ");
// // // // // // //         scanf("%d", &owner[i].telephone);
// // // // // // //         printf("Vehicle No: ");
// // // // // // //         scanf("%s", &owner[i].vehicleNo);
// // // // // // //         printf("License NO: ");
// // // // // // //         scanf("%d", &owner[i].licenseNo);
// // // // // // //         fprintf(fp, "%s %s %d %s %d", owner[i].name, owner[i].address, owner[i].telephone, owner[i].vehicleNo, owner[i].licenseNo);
// // // // // // //         getchar();
// // // // // // //     }
// // // // // // //     fclose(fp);
// // // // // // //     fopen("ownerInfo.txt", "r");

// // // // // // //     printf("\nName\tAddress\tTelephone\tVehicle No\tLicense No\n");
// // // // // // //     for (i = 0; i < n; i++)
// // // // // // //     {
// // // // // // //         fscanf(fp, "%s %s %d %s %d", &own[i].name, &own[i].address, &own[i].telephone, &own[i].vehicleNo, &own[i].licenseNo);
// // // // // // //         printf("\n%s\t%s\t%d\t%s\t%d\n", own[i].name, own[i].address, own[i].telephone, own[i].vehicleNo, own[i].licenseNo);
// // // // // // //     }
// // // // // // //     fclose(fp);

// // // // // // //     getchar();
// // // // // // //     return 0;
// // // // // // // }

// // // // // // #include <stdio.h>
// // // // // // #include <string.h>

// // // // // // int main()
// // // // // // {
// // // // // //     FILE *sfp, *dfp;
// // // // // //     char c[40];

// // // // // //     sfp = fopen("text.txt", "r");
// // // // // //     if (sfp == NULL)
// // // // // //     {
// // // // // //         printf("Error Opening Source File!!!");
// // // // // //         return 1;  // Return an error code to indicate failure
// // // // // //     }

// // // // // //     dfp = fopen("destinationFile.txt", "w");  // Use "w" for write mode
// // // // // //     if (dfp == NULL)
// // // // // //     {
// // // // // //         printf("Error Opening Destination File!!!");
// // // // // //         fclose(sfp);  // Close the source file before returning
// // // // // //         return 1;  // Return an error code to indicate failure
// // // // // //     }

// // // // // //     while (fscanf(sfp, "%s", c) != EOF)
// // // // // //     {
// // // // // //         if (strcmp(c, "Ram") == 0)
// // // // // //         {
// // // // // //             fprintf(dfp, "Hari ");
// // // // // //         }
// // // // // //         else if (strcmp(c, "Sita") == 0)
// // // // // //         {
// // // // // //             fprintf(dfp, "Gita ");
// // // // // //         }
// // // // // //         else if (strcmp(c, "Govinda") == 0)
// // // // // //         {
// // // // // //             fprintf(dfp, "Shiva ");
// // // // // //         }
// // // // // //         else
// // // // // //         {
// // // // // //             fprintf(dfp, "%s ", c);
// // // // // //         }
// // // // // //     }

// // // // // //     fclose(sfp);
// // // // // //     fclose(dfp);

// // // // // //     return 0;  // Return 0 to indicate success
// // // // // // }

// // // // // // a data file contains all the numbers that are inputted by the user and then we have to clasify the number into odd and even files

// // // // // #include <stdio.h>

// // // // // int main()
// // // // // {
// // // // //     FILE *dp, *ep, *op;

// // // // //     dp = fopen("dataFile.txt", "w");
// // // // //     ep = fopen("evenFile.txt", "w");
// // // // //     op = fopen("oddFile.txt", "w");

// // // // //     int i, n, num;
// // // // //     printf("Enter the no of numbers: ");
// // // // //     scanf("%d", &n);
// // // // //     int numbers[n];

// // // // //     for (i = 0; i < n; i++)
// // // // //     {
// // // // //         printf("Enter Number: ");
// // // // //         scanf("%d", &numbers[i]);
// // // // //         fprintf(dp, "%d ", numbers[i]); // Add a space after each number
// // // // //     }

// // // // //     fclose(dp); // Close the file before reopening for reading

// // // // //     // Reopen the data file for reading
// // // // //     dp = fopen("dataFile.txt", "r");
// // // // //     if (dp == NULL)
// // // // //     {
// // // // //         printf("Error Opening Data File for Reading");
// // // // //         return 1; // Return an error code to indicate failure
// // // // //     }

// // // // //     while (fscanf(dp, "%d", &num) == 1) // Check if fscanf successfully reads a number
// // // // //     {
// // // // //         if (num % 2 == 0)
// // // // //         {
// // // // //             fprintf(ep, "%d ", num); // Add a space after each even number
// // // // //         }
// // // // //         else
// // // // //         {
// // // // //             fprintf(op, "%d ", num); // Add a space after each odd number
// // // // //         }
// // // // //     }

// // // // //     printf("....finished Copying....\n");

// // // // //     fclose(dp);
// // // // //     fclose(ep);
// // // // //     fclose(op);

// // // // //     return 0;
// // // // // }

// // // // // write records to the file using structure

// // // // // #include <stdio.h>

// // // // // struct Employee
// // // // // {
// // // // //     char name[50];
// // // // //     int age;
// // // // //     float salary;
// // // // // } emp;

// // // // // int main()
// // // // // {
// // // // //     FILE *fp;
// // // // //     char another ='Y';
// // // // //     fp = fopen("Employee.txt", "wb");
// // // // //     if (fp == NULL)
// // // // //     {
// // // // //         printf("Error opening File!!!");
// // // // //     }
// // // // //     while (another == 'Y')
// // // // //     {
// // // // //         printf("\nEnter name, age & basic Salary of employee \n");
// // // // //         scanf("%s %d %f", &emp.name, &emp.age, &emp.salary);
// // // // //         fwrite(&emp, sizeof(emp), 1, fp);
// // // // //         printf("\nAnother Record Added\n");
// // // // //         printf("Add another record? Y/N");
// // // // //         scanf("%c", &another);
// // // // //     }
// // // // //     fclose(fp);
// // // // //     return 0;
// // // // // }

// // // // // read from an existing file using fread function

// // // // #include<stdio.h>

// // // // struct Employee
// // // // {
// // // //     char name[50];
// // // //     int age;
// // // //     float salary;
// // // // } emp;

// // // // int main(){
// // // //     FILE *fp;
// // // //     fp= fopen("Employee.txt","rb");
// // // //     if(fp==NULL){
// // // //         printf("Cannot open file");
// // // //         exit(1);
// // // //     }

// // // //     printf("The records in the employee file are:\n");
// // // //     fread(&emp, sizeof(emp),1,fp);
// // // //     printf("%s %d %.2f",emp.name, emp.age, emp.salary);

// // // //     fclose(fp);
// // // //     return 0;

// // // // }

// // // // create a file and store the records of employees and filter out specific records

// // // #include <stdio.h>
// // // #include <string.h>
// // // #define n 3

// // // struct Employee
// // // {
// // //     char name[50];
// // //     int identityNum;
// // //     char officeName[50];
// // //     char occupation[50];
// // // };

// // // int main()
// // // {
// // //     struct Employee emp[n], e[n];
// // //     int i;
// // //     FILE *fp;
// // //     fp = fopen("employee.txt", "wb");
// // //     if (fp == NULL)
// // //     {
// // //         printf("Error opening File !!!");
// // //     }

// // //     // getting information and writing into the file
// // //     for (i = 0; i < n; i++)
// // //     {
// // //         printf("\nDetails of Employee %d\n", i + 1);
// // //         puts("Name: ");
// // //         fflush(stdin);
// // //         gets(emp[i].name);
// // //         printf("\nIdentity Number: ");
// // //         scanf("%d", &emp[i].identityNum);
// // //         puts("Office Name: ");
// // //         fflush(stdin);
// // //         gets(emp[i].officeName);
// // //         puts("Occupation: ");
// // //         fflush(stdin);
// // //         gets(emp[i].occupation);

// // //         fwrite(&emp[i], sizeof(struct Employee), 1, fp);
// // //     }

// // //     fclose(fp);
// // //     fp = fopen("employee.txt", "rb");

// // //     // reading information from the files
// // //     fread(&e, sizeof(struct Employee), n, fp);
// // //     printf("\nThe name of employee from Everest Bank and Occupation is Manager is\n");
// // //     for (i = 0; i < n; i++)
// // //     {
// // //         if ((strcmp(e[i].officeName, "Everest Bank") == 0) && strcmp(e[i].occupation, "Manager") == 0)
// // //         {
// // //             printf("%s\n", e[i].name);
// // //         }
// // //     }
// // //     fclose(fp);
// // //     return 0;
// // // }

// // // program to open a file and insert records and select specific records

// // #include <stdio.h>
// // #include <string.h>

// // #define n 4

// // struct Student
// // {
// //     int roll_no;
// //     char name[50];
// //     char course[50];
// //     char sem[10];
// // };

// // int main()
// // {

// //     struct Student std[n];
// //     int i;
// //     FILE *fp;
// //     fp = fopen("StudentRecords.txt", "wb");
// //     if (fp == NULL)
// //     {
// //         printf("Cannot open File!!!");
// //     }

// //     for (i = 0; i < n; i++)
// //     {
// //         printf("\nEnter records of Student %d\n", i + 1);
// //         printf("Roll no: ");
// //         scanf("%d", &std[i].roll_no);
// //         printf("Name: ");
// //         scanf(" %s", &std[i].name);
// //         printf("Course: ");
// //         scanf(" %s", &std[i].course);
// //         printf("Semester: ");
// //         scanf(" %s", &std[i].sem);

// //         fwrite(&std, sizeof(struct Student), 1, fp);
// //     }
// //     fclose(fp);
// //     fp = fopen("StudentRecord.txt", "rb");
// //     if (fp == NULL)
// //     {
// //         printf("Cannot open file!!!");
// //     }

// //     fread(&std, sizeof(struct Student), n, fp);

// //     for (i = 0; i < n; i++)
// //     {
// //         if ((strcmp(std[i].course, "BCA") == 0) && (strcmp(std[i].sem, "II") == 0))
// //         {
// //             printf("%s", std[i].name);
// //         }
// //     }

// //     fclose(fp);
// //     return 0;
// // }

// // program to take the records of employee and show in ascending order of salary

// #include <stdio.h>
// #include <string.h>

// #define n 4

// struct Employee
// {
//     int id;
//     char name[50];
//     int salary;
// };

// int main()
// {

//     struct Employee emp[n], temp;
//     int i, j;
//     FILE *fp;
//     fp = fopen("EmployeeRecords.txt", "wb");
//     if (fp == NULL)
//     {
//         printf("Cannot open File!!!");
//     }

//     // take the records of employee
//     for (i = 0; i < n; i++)
//     {
//         printf("\nEnter records of Employee %d\n", i + 1);
//         printf("ID: ");
//         scanf("%d", &emp[i].id);
//         printf("Name: ");
//         scanf(" %s", &emp[i].name);
//         printf("Salary: ");
//         scanf("%d", &emp[i].salary);

//         fwrite(&emp, sizeof(struct Employee), 1, fp);
//     }
//     fclose(fp);
//     fp = fopen("EmployeeRecords.txt", "rb");
//     if (fp == NULL)
//     {
//         printf("Cannot open file!!!");
//         return 1;
//     }

//     fread(&emp, sizeof(struct Employee), n, fp);

//     // arrange the files in ascending order of their salary

//     for (i = 0; i < n - 1; i++)
//     {
//         for (j = 0; j = n - 1 - i; i++)
//         {
//             if (emp[j].salary > emp[j + 1].salary)
//             {
//                 temp = emp[j];
//                 emp[j] = emp[j + 1];
//                 emp[j + 1] = temp;
//             }
//         }
//     }

//     // print all the records back to the console
//     printf("\nEmployee Records \n");
//     printf("\nId\tName\tSalary\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d\t%s\t%d\n", emp[i].id, emp[i].name, emp[i].salary);
//     }

//     fclose(fp);

//     return 0;
// }

// program to count vowel consonents and spaces in a file

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     FILE *fp;
//     int constant = 0, vowels = 0, space = 0;
//     char ch;
//     fp = fopen("text.txt", "r");
//     if (fp == NULL)
//     {
//         printf("Cannot open File!!!");
//         return 1;
//     }
//     while ((ch = fgetc(fp)) != EOF)
//     {
//         if (ch == ' ')
//         {
//             space++;
//         }
//         else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//         {
//             vowels++;
//         }
//         else
//         {
//             constant++;
//         }
//     }

//     printf("Consonents= %d, Vowels=%d, Space=%d", constant, vowels, space);

//     return 0;
// }

