/*
Write a program in C to  create and store information in a binary file(using fread and fwrite functions)
*/

#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    FILE *file;
    struct Employee emp;

    // Open file in binary write mode
    file = fopen("employee.dat", "wb");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Get user input
    printf("Enter name: ");
    scanf("%s", emp.name);
    printf("Enter age: ");
    scanf("%d", &emp.age);
    printf("Enter salary: ");
    scanf("%f", &emp.salary);

    // Write data to binary file
    fwrite(&emp, sizeof(struct Employee), 1, file);
    fclose(file);

    // Open file in binary read mode
    file = fopen("employee.dat", "rb");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Read and display data from binary file
    fread(&emp, sizeof(struct Employee), 1, file);
    printf("\nReading from binary file:\n");
    printf("Name: %s\n", emp.name);
    printf("Age: %d\n", emp.age);
    printf("Salary: %.2f\n", emp.salary);

    fclose(file);

    return 0;
}
