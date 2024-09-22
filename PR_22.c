/*
WAP to check if a given string is palindrome or not.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    int len, i, flag = 0;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        rev[i] = str[len - i - 1];
    }
    rev[i] = '\0';

    if (strcmp(str, rev) == 0)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a palindrome\n");
    }

    return 0;
}
