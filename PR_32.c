/*
Write a program in C to create and store information in a text file(using fprintf and fscanf functions)
*/
#include <stdio.h>

int main()
{
    FILE *file;
    char name[50];
    int age;
    float salary;

    // Open file in write mode
    file = fopen("employee.txt", "w");
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

    // Write data to file
    fprintf(file, "Name: %s\nAge: %d\nSalary: %.2f\n", name, age, salary);
    fclose(file);

    // Open file in read mode
    file = fopen("employee.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Read and display data from file
    printf("\nReading from file:\n");
    fscanf(file, "Name: %s\nAge: %d\nSalary: %f\n", name, &age, &salary);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);

    fclose(file);

    return 0;
}
