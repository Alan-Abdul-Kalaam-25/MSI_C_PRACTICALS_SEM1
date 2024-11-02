/*
Write a program in C to print a string in reverse using a pointer.
*/

#include <stdio.h>
#include <string.h>

void printReverse(char *str)
{
    char *end = str + strlen(str) - 1;

    while (end >= str)
    {
        printf("%c", *end);
        end--;
    }
    printf("\n");
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Reversed String: ");
    printReverse(str);

    return 0;
}
