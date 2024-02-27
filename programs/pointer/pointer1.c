// #include <stdio.h>

// int main()
// {
//     int age = 28;
//     int *pAge = &age;

//     // address and value of age
//     printf("Address of age: %p \n", &age);
//     printf("Value of age: %d \n", age);

//     //storing the address in different variable
//     printf("Addres of age : %p \n", pAge);
//     printf("Value of age %d\n",*pAge);

//     //size of
//     printf("The size of value of age : %d bytes \n", sizeof(age));
//     printf("the size of address of age : %d bytes\n",sizeof(pAge));

//     return 0;
// }

#include <stdio.h>

int main()
{

    int age = 28;
    int *pAge = &age;

    printf("Value of age is : %d \n",*pAge);
    printf("address of age is %p \n", pAge);
    printf("address of age is %p \n", &age);


}