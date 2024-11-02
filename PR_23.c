/*
WAP to reverse a string, concatenate two strings, length of a string, copy one string to other using a user defined function and menu driven program.
*/

#include <stdio.h>
#include <string.h>

void reverseString(char str[])
{
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    printf("Reversed String: %s\n", str);
}

void concatenateStrings(char str1[], char str2[])
{
    strcat(str1, str2);
    printf("Concatenated String: %s\n", str1);
}

int lengthOfString(char str[])
{
    return strlen(str);
}

void copyString(char dest[], char src[])
{
    strcpy(dest, src);
    printf("Copied String: %s\n", dest);
}

int main()
{
    int choice;
    char str1[100], str2[100], result[100];

    do
    {
        printf("\nMenu:\n");
        printf("1. Reverse String\n");
        printf("2. Concatenate Strings\n");
        printf("3. Length of String\n");
        printf("4. Copy String\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter a string to reverse: ");
            scanf("%s", str1);
            reverseString(str1);
            break;
        case 2:
            printf("Enter first string: ");
            scanf("%s", str1);
            printf("Enter second string: ");
            scanf("%s", str2);
            concatenateStrings(str1, str2);
            break;
        case 3:
            printf("Enter a string to find its length: ");
            scanf("%s", str1);
            printf("Length of String: %d\n", lengthOfString(str1));
            break;
        case 4:
            printf("Enter source string: ");
            scanf("%s", str1);
            copyString(result, str1);
            break;
        case 5:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice, please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
