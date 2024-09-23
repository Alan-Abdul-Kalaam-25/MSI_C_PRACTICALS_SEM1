/*WAP to reverse a string, concatenate two strings, length of a string, copy one string to other using a user defined function and menu driven program.*/

#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

void concatenateStrings(char str1[], char str2[], char result[]) {
    strcpy(result, str1);
    strcat(result, str2);
}

int stringLength(char str[]) {
    return strlen(str);
}

void copyString(char source[], char destination[]) {
    strcpy(destination, source);
}

int main() {
    int choice;
    char str1[100], str2[100], result[200];

    do {
        printf("\nMenu:\n");
        printf("1. Reverse a String\n");
        printf("2. Concatenate Two Strings\n");
        printf("3. Length of a String\n");
        printf("4. Copy One String to Another\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume the newline character left by scanf

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0'; // Remove newline character
                reverseString(str1);
                printf("Reversed String: %s\n", str1);
                break;

            case 2:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0'; // Remove newline character
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0'; // Remove newline character
                concatenateStrings(str1, str2, result);
                printf("Concatenated String: %s\n", result);
                break;

            case 3:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0'; // Remove newline character
                printf("Length of the string: %d\n", stringLength(str1));
                break;

            case 4:
                printf("Enter a string to copy: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0'; // Remove newline character
                copyString(str1, str2);
                printf("Copied String: %s\n", str2);
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
