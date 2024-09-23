/*WAP to count the no. of vowels and consonants in a string using a pointer*/

#include <stdio.h>
#include <ctype.h>

void countVowelsAndConsonants(char *str, int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;
    while (*str) {
        char ch = tolower(*str);
        if ((ch >= 'a' && ch <= 'z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
        str++;
    }
}

int main() {
    char str[100];
    int vowels, consonants;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    countVowelsAndConsonants(str, &vowels, &consonants);
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
