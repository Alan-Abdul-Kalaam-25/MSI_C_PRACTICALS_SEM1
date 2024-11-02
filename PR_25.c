// Write a program in C to count the number of vowels and consonants in a string using a pointer.

#include <stdio.h>
#include <ctype.h>

void countVowelsConsonants(char *str, int *vowels, int *consonants)
{
    *vowels = *consonants = 0;

    while (*str != '\0')
    {
        char ch = tolower(*str);
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                (*vowels)++;
            else
                (*consonants)++;
        }
        str++;
    }
}

int main()
{
    char str[100];
    int vowels, consonants;

    printf("Enter a string: ");
    scanf("%s", str);

    countVowelsConsonants(str, &vowels, &consonants);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
