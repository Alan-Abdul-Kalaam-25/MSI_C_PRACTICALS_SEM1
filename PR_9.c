/*
WAP to print the following patterns using loops...
*
**
***
****
*****

1
12
123
1234
12345

555555
44444
333
22
1

A
AB
ABC
ABCD
ABCDE
*/

#include <stdio.h>

int main()
{
    int n = 5;

    printf("Star Pattern:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\nNumber Pattern 1:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\nNumber Pattern 2:\n");
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    printf("\nCharacter Pattern:\n");
    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A'; j < 'A' + i; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }

    return 0;
}