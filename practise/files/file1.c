// // // // // // // // // // // #include <stdio.h>

// // // // // // // // // // // int main()
// // // // // // // // // // // {
// // // // // // // // // // //     FILE *fp;
// // // // // // // // // // //     fp = fopen("test.txt", "w");
// // // // // // // // // // //     if (fp == NULL)
// // // // // // // // // // //     {
// // // // // // // // // // //         printf("Error opening the file");
// // // // // // // // // // //         return 1;
// // // // // // // // // // //     }
// // // // // // // // // // //     printf("\nFile is created\n");
// // // // // // // // // // //     fputs("I study BCA", fp);
// // // // // // // // // // //     fclose(fp);
// // // // // // // // // // //     return 0;
// // // // // // // // // // // }

// // // // // // // // // // // program to read something from a file and display it to the screen,,

// // // // // // // // // // #include <stdio.h>

// // // // // // // // // // int main()
// // // // // // // // // // {
// // // // // // // // // //     char s[100];
// // // // // // // // // //     FILE *fp;

// // // // // // // // // //     fp = fopen("test.txt", "r");

// // // // // // // // // //     if (fp == NULL)
// // // // // // // // // //     {
// // // // // // // // // //         printf("Cannot open file");
// // // // // // // // // //         return 1;
// // // // // // // // // //     }

// // // // // // // // // //     printf("File opened");
// // // // // // // // // //     fgets(s, 20, fp);
// // // // // // // // // //     printf("the contents of file \n");
// // // // // // // // // //     printf(s);
// // // // // // // // // //     fclose(fp);
// // // // // // // // // //     return 0;
// // // // // // // // // // }

// // // // // // // // // // program to write something to a file, a character at a time until enter key is pressed

// // // // // // // // // #include <stdio.h>

// // // // // // // // // int main()
// // // // // // // // // {
// // // // // // // // //     FILE *fp;
// // // // // // // // //     char c;
// // // // // // // // //     fp = fopen("text.txt", "w");
// // // // // // // // //     if (fp == NULL)
// // // // // // // // //     {
// // // // // // // // //         printf("Cannot open file!!");
// // // // // // // // //         return 1;
// // // // // // // // //     }

// // // // // // // // //     printf("File opened successfully\n");

// // // // // // // // //     while ((c = getchar()) != '\0')
// // // // // // // // //     {
// // // // // // // // //         fputc(c, fp);
// // // // // // // // //     }

// // // // // // // // //     fclose(fp);
// // // // // // // // //     return 0;
// // // // // // // // // }

// // // // // // // // // program to open a file and copy all its content to another file

// // // // // // // // #include <stdio.h>

// // // // // // // // int main()
// // // // // // // // {
// // // // // // // //     FILE *sfp, *dfp;
// // // // // // // //     char c;
// // // // // // // //     sfp = fopen("test.txt", "r");
// // // // // // // //     if (sfp == NULL)
// // // // // // // //     {
// // // // // // // //         printf("Cannot open file");
// // // // // // // //         return 1;
// // // // // // // //     }
// // // // // // // //     dfp = fopen("text.txt", "w");
// // // // // // // //     if (dfp == NULL)
// // // // // // // //     {
// // // // // // // //         printf("Cannot open file");
// // // // // // // //         return 1;
// // // // // // // //     }

// // // // // // // //     while ((c = fgetc(sfp)) != EOF)
// // // // // // // //     {
// // // // // // // //         fputc(c, dfp);
// // // // // // // //     }

// // // // // // // //     printf("Completed copying files");
// // // // // // // //     fclose(sfp);
// // // // // // // //     fclose(dfp);

// // // // // // // //     return 0;
// // // // // // // // }

// // // // // // // // copy contents from one file to another excluding vowels

// // // // // // // #include <stdio.h>

// // // // // // // int main()
// // // // // // // {
// // // // // // //     FILE *sfp, *dfp;
// // // // // // //     char c;
// // // // // // //     sfp = fopen("test.txt", "r");
// // // // // // //     if (sfp == NULL)
// // // // // // //     {
// // // // // // //         printf("Cannot open file");
// // // // // // //         return 1;
// // // // // // //     }
// // // // // // //     dfp = fopen("text.txt", "w");
// // // // // // //     if (dfp == NULL)
// // // // // // //     {
// // // // // // //         printf("Cannot open file");
// // // // // // //         return 1;
// // // // // // //     }

// // // // // // //     while ((c = fgetc(sfp)) != EOF)
// // // // // // //     {
// // // // // // //         if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
// // // // // // //         {
// // // // // // //             fputc(c, dfp);
// // // // // // //         }
// // // // // // //     }

// // // // // // //     printf("\nCompleted task\n");

// // // // // // //     return 0;
// // // // // // // }

// // // // // // // entering formatted data into the file

// // // // // // #include <stdio.h>

// // // // // // int main()
// // // // // // {

// // // // // //     char name[50], address[50];
// // // // // //     int age;
// // // // // //     FILE *fp;
// // // // // //     fp = fopen("employee.txt", "w");
// // // // // //     if (fp == NULL)
// // // // // //     {
// // // // // //         printf("Cannot open file");
// // // // // //         return 1;
// // // // // //     }

// // // // // //     printf("Enter the details of employee:\n");
// // // // // //     printf("Name");
// // // // // //     scanf("%[^\n]", name);
// // // // // //     printf("Address");
// // // // // //     scanf("%s", address);
// // // // // //     printf("Age");
// // // // // //     scanf("%d", &age);

// // // // // //     printf("Writing data into the file\n");
// // // // // //     fprintf(fp, "Name= %s Address= %s Age=%d", name, address, age);

// // // // // //     printf("\nCompleted\n");

// // // // // //     return 0;
// // // // // // }

// // // // // // vehicle owner

// // // // // #include <stdio.h>
// // // // // #define n 3

// // // // // struct Owner
// // // // // {
// // // // //     char name[50];
// // // // //     char address[50];
// // // // //     int telephone;
// // // // // };

// // // // // int main()
// // // // // {
// // // // //     struct Owner own[n], ow[n];
// // // // //     FILE *fp;
// // // // //     fp = fopen("OwnersInfo.txt", "w");
// // // // //     if (fp == NULL)
// // // // //     {
// // // // //         printf("Cannot open file");
// // // // //         return 1;
// // // // //     }
// // // // //     printf("Enter the details of owners ");
// // // // //     for (int i = 0; i < n; i++)
// // // // //     {
// // // // //         printf("Name: ");
// // // // //         scanf("%s", own[i].name);
// // // // //         printf("Address: ");
// // // // //         scanf("%s", own[i].address);
// // // // //         printf("Telephone: ");
// // // // //         scanf("%d", &own[i].telephone);
// // // // //         fprintf(fp, "%s\t %s\t %d\n", own[i].name, own[i].address, own[i].telephone);
// // // // //     }
// // // // //     fclose(fp);
// // // // //     fp = fopen("OwnerInfo.txt", "r");

// // // // //     for (int i = 0; i < n; i++)
// // // // //     {
// // // // //         fscanf(fp, "%s %s %d", ow[i].name, ow[i].address, &ow[i].telephone);
// // // // //         printf("%s %s %d\n", ow[i].name, ow[i].address, ow[i].telephone);
// // // // //     }

// // // // //     fclose(fp);
// // // // //     return 0;
// // // // // }

// // // // // copy a contents of file to another deleting certain words

// // // // #include <stdio.h>
// // // // #include <string.h>

// // // // int main()
// // // // {
// // // //     char word[100];
// // // //     FILE *sfp, *dfp;
// // // //     sfp = fopen("test.txt", "r");
// // // //     if (sfp == NULL)
// // // //     {
// // // //         printf("Cannot open source file");
// // // //         return 1;
// // // //     }
// // // //     dfp = fopen("text.txt", "w");
// // // //     if (dfp == NULL)
// // // //     {
// // // //         printf("Cannot open destination file");
// // // //         return 1;
// // // //     }

// // // //     while ((fscanf(sfp, "%s", &word)) != EOF)
// // // //     {
// // // //         if ((strcmp(word, "three") != 0) && (strcmp(word, "good") != 0) && (strcmp(word, "time") != 0))
// // // //         {
// // // //             fprintf(dfp, "%s", word);
// // // //         }
// // // //     }
// // // //     printf("Completed task");

// // // //     return 0;
// // // // }

// // // // take the contents from test file and write into text file with changes

// // // #include <stdio.h>
// // // #include <string.h>

// // // int main()
// // // {

// // //     FILE *sfp, *dfp;
// // //     char str[20];
// // //     sfp = fopen("test.txt", "r");
// // //     if (sfp == NULL)
// // //     {
// // //         printf("Error opening source file");
// // //         return 1;
// // //     }
// // //     dfp = fopen("text.txt", "w");
// // //     if (dfp == NULL)
// // //     {
// // //         printf("Error opening destination file");
// // //         return 1;
// // //     }

// // //     while ((fscanf(sfp, "%s", &str)) != EOF)
// // //     {
// // //         if (strcmp(str, "Ram") == 0)
// // //         {
// // //             fprintf(dfp, "Hari");
// // //         }
// // //         else if (strcmp(str, "Sita") == 0)
// // //         {
// // //             fprintf(dfp, "Gita");
// // //         }
// // //         else if (strcmp(str, "Shiva") == 0)
// // //         {
// // //             fprintf(dfp, "Govinda");
// // //         }
// // //         else
// // //         {
// // //             fprintf(dfp, str);
// // //         }
// // //     }

// // //     printf("Task completed");
// // //     fclose(sfp);
// // //     fclose(dfp);

// // //     return 0;
// // // }

// // #include <stdio.h>

// // int main()
// // {
// //     FILE *sfp, *efp, *ofp;
// //     int num;

// //     sfp = fopen("data.txt", "r");
// //     if (sfp == NULL)
// //     {
// //         printf("Error opening source file");
// //         return 1;
// //     }
// //     efp = fopen("even.txt", "w");
// //     if (efp == NULL)
// //     {
// //         printf("Error opening even file");
// //         return 1;
// //     }
// //     ofp = fopen("odd.txt", "w");
// //     if (ofp == NULL)
// //     {
// //         printf("Error opening odd file");
// //         return 1;
// //     }

// //     while ((fscanf(sfp, "%d", &num)) != EOF)
// //     {
// //         if (num % 2 == 0)
// //         {
// //             fprintf(efp, "%d,", num);
// //         }
// //         if (num % 2 != 0)
// //         {
// //             fprintf(ofp, "%d,", num);
// //         }
// //     }

// //     printf("Task completed.");
// //     return 0;
// // }

// #include <stdio.h>
// #include <string.h>
// #define n 3

// struct Employee
// {
//     int id;
//     char name[50];
//     char office[50];
//     char occupation[50];
// };

// int main()
// {
//     struct Employee emp[3], e[3];
//     FILE *fp;
//     fp = fopen("employeerecord.txt", "w");
//     if (fp == NULL)
//     {
//         printf("Cannot open destination file.");
//         return 1;
//     }

//     printf("Enter the records of employee \n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("Name: ");
//         scanf("%s", emp[i].name);
//         printf("ID: ");
//         scanf("%d", &emp[i].id);
//         printf("Office: ");
//         scanf("%s", emp[i].office);
//         printf("Occupation: ");
//         scanf("%s", emp[i].occupation);

//         fwrite(&emp, sizeof(emp), 1, fp);
//     }

//     fclose(fp);

//     fp = fopen("employeerecord.txt", "r");
//     if (fp == NULL)
//     {
//         printf("Cannot open destination file.");
//         return 1;
//     }
//     printf("Records of employee at Everest Bank and Manager position\n");
//     printf("Name\t Office\t Occupation\n");
//     for (int i = 0; i < n; i++)
//     {
//         fread(&e, sizeof(e), 1, fp);
//         if ((strcmp(e[i].office, "Everest") == 0) && (strcmp(e[i].occupation, "Manager") == 0))
//         {
//             printf("\n%s\t %s\t %s\n", e[i].name, e[i].office, e[i].occupation);
//         }
//     }

//     fclose(fp);
//     return 0;
// }

#include <stdio.h>
#define n 2

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[n], temp, e[n];
    int i, j;
    FILE *fp;
    fp = fopen("emp.txt", "w");
    if (fp == NULL)
    {
        printf("Cannot open destination file.");
        return 1;
    }

    printf("Enter employee records: \n");

    for (i = 0; i < n; i++)
    {
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        fwrite(&emp[i], sizeof(emp), 1, fp); // writing into the file
    }
    fclose(fp);
    fp = fopen("emp.txt", "r");

    // fetching from the file
    for (i = 0; i < n; i++)
    {
        fread(&e[i], sizeof(e), 1, fp);
    }

    // arranging the data

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (e[i].id > e[j].id)
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }

    // displaying the data

    printf("\nID\tName\tSalary\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.2f\n", e[i].id, e[i].name, e[i].salary);
    }

    fclose(fp);
    return 0;
}