/*
Write a program in C to  create and store information in a data  file(using getc and putc functions)
*/

#include <stdio.h>

int main()
{
    FILE *file;
    char ch;
    char name[50];
    int age;
    float salary;

    // Open file in write mode
    file = fopen("data.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Get user input
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter salary: ");
    scanf("%f", &salary);

    // Write data to file using putc
    fprintf(file, "Name: %s\n", name);
    fprintf(file, "Age: %d\n", age);
    fprintf(file, "Salary: %.2f\n", salary);
    fclose(file);

    // Open file in read mode
    file = fopen("data.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Read and display data from file using getc
    printf("\nReading from file:\n");
    while ((ch = getc(file)) != EOF)
    {
        putchar(ch); // Print each character read from the file
    }

    fclose(file);

    return 0;
}
