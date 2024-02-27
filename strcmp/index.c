// // strcpy

// // #include<stdio.h>
// //#include<string.h>
// // int main(){
// //     char source[]="HelloWorld";
// //     char dest[30];
// //     strcpy(dest,source);
// //     printf("\n The given source is %s",source);
// //     printf("The destination os %s",dest);
// //     return 0;
// // }

// // StrnCpy

// // #include<stdio.h>
// // #include <string.h>
// // int main(){
// //     char src[]="Hello World";
// //     char dest[6];
// //     strncpy(dest,src,6);
// //     dest[5]='\0';
// //     printf("\n The given source is %s",src);
// //     printf("\n The destination is %s",dest);
// //     return 0;
// // }

// // strlen
// //

// // #include<stdio.h>
// // #include <string.h>
// //  int main(){
// //      char src[]="Hello World";
// //      int length=strlen(src);
// //      printf("\n The length of string is %d",length);
// //      return 0;
// //  }

// // Concatenating String
// // strcat

// // #include<stdio.h>
// // #include <string.h>
// // int main(){
// //     char src[10]="World";
// //     char dest[10]="Hello";
// //     strcat(dest,src);
// //     printf("The concatenated string is %s",dest);
// //     return 0;
// // }

// // Reversing the string
// // strrev(string)
// //  To reverse (lengh-i-1)

// // #include<stdio.h>
// // #include<string.h>
// // int main(){
// //     char string[100];
// //     printf("Enter String :");
// //     gets(string);
// //     strrev(string);
// //     printf("String after rev is %s",string);
// //     return 0;
// // }

// // uppercasing the string
// // strupr

// // #include<stdio.h>
// // #include<string.h>
// // int main(){
// //     char string[100];
// //     printf("Enter String :");
// //     gets(string);
// //     strupr(string);
// //     printf("String after uppercasing is %s",string);
// //     return 0;
// // }

// // Lower casing the String
// // strlwr

// // #include<stdio.h>
// // #include<string.h>
// // int main(){
// //     char string[100];
// //     printf("Enter String :");
// //     gets(string);
// //     strlwr(string);
// //     printf("String after lowercasing is %s",string);
// //     return 0;
// // }

// // Comparison of String
// // strcmp

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char string[100];
//     printf("Enter String :");
//     gets(string);
//     strlwr(string);
//     printf("String after lowercasing is %s",string);
//     return 0;
// }
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    char b[100];
    printf("Enter string a: ");
    gets(a);
    printf("Enter string b: ");
    gets(b);
    int result;
    result = strcmp(a, b);
    if (result == 0)
    {
        printf("The strings are equal\n");
    }
    else if (result > 0)
    {
        printf("%s is greater.\n", b);
    }
    else
    {
        printf("%s is greater.\n", a);
    }
    return 0;
}
