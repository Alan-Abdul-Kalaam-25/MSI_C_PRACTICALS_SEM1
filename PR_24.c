/*WAP to print a string in reverse using a pointer.*/

#include <stdio.h>

void reverseString(char *str) {
    char *start = str;
    char *end = str;
    while (*end) {
        end++;
    }
    end--;
    while (end >= start) {
        putchar(*end);
        end--;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    reverseString(str);
    printf("\n");
    return 0;
}
