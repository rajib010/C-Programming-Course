#include <stdio.h>
#include <string.h>
int main()
{

    char msg[1000];
    int len, i, vowels = 0, commas = 0, consonants = 0;
    printf("Enter the string: ");
    gets(msg);
    len = strlen(msg);
    for (i = 0; i < len; i++)
    {
        if (msg[i] == 'a' || msg[i] == 'e' || msg[i] == 'i' || msg[i] == 'o' || msg[i] == 'u')
        {
            vowels++;
        }
        else if (msg[i] == ',')
        {
            commas++;
        }
        else
        {
            consonants++;
        }
    }

    printf("Vowels: %d", vowels);
    printf("Consonants: %d", consonants);
    printf("Commas: %d", commas);

    return 0;
}