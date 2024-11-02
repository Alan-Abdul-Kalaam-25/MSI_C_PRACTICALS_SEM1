/*
Write a program in C to  create and store information in a data  file(using fgets and fputs functions)
*/

#include <stdio.h>

int main()
{
    FILE *file;
    char name[50];
    int age;
    float salary;
    char buffer[100];

    // Open file in write mode
    file = fopen("data.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Get user input
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter salary: ");
    scanf("%f", &salary);

    // Clear the input buffer after scanf
    while (getchar() != '\n')
        ;

    // Write data to file using fputs
    fputs("Name: ", file);
    fputs(name, file);
    fputs("Age: ", file);
    fprintf(file, "%d\n", age); // Using fprintf for integer
    fputs("Salary: ", file);
    fprintf(file, "%.2f\n", salary); // Using fprintf for float
    fclose(file);

    // Open file in read mode
    file = fopen("data.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Read and display data from file using fgets
    printf("\nReading from file:\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        fputs(buffer, stdout); // Print each line read from the file
    }

    fclose(file);

    return 0;
}
