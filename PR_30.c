/*
Create a union union Data {int i; float f; char str[20]}.WAP to show how to access and print members of union and also print the maximum memory occupied by union members.
*/

#include <stdio.h>
#include <string.h>

union Data
{
    int i;
    float f;
    char str[20];
};

int main()
{
    union Data data;

    // Accessing and printing each member one by one
    data.i = 10;
    printf("data.i: %d\n", data.i);

    data.f = 220.5;
    printf("data.f: %.2f\n", data.f);

    strcpy(data.str, "Hello, World!");
    printf("data.str: %s\n", data.str);

    // Displaying the maximum memory occupied by union members
    printf("\nMaximum memory occupied by union: %lu bytes\n", sizeof(data));

    return 0;
}
