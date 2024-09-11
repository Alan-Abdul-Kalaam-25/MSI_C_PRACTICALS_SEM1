/*
A character is entered through the keyboard, WAP to determine whether the character is entered capital, small, digit or special character.
*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a single character: ");
    scanf("%c", &ch);

    if ((ch >= 65) && (ch <= 90))
    {
        printf("You entered a Capital letter!");
    }
    else if ((ch >= 97) && (ch <= 122))
    {
        printf("You entered a Small letter!");
    }
    else if ((ch >= 48) && (ch <= 57))
    {
        printf("You entered a Digit!");
    }
    else
    {
        printf("You entered a Special Character!");
    }

    return 0;
}