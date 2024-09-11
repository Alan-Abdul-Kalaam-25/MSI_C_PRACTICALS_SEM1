/*
WAP to check whether inputted character is a vowel or not using switch case.
*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 65:
    case 69:
    case 73:
    case 79:
    case 85:
    case 97:
    case 101:
    case 105:
    case 111:
    case 117:
        printf("%c is a vowel.\n", ch);
        break;
    default:
        printf("%c is not a vowel.\n", ch);
    }

    return 0;
}