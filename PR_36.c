/*
Write a program in C to  create and store information in a data  file(using getw and putw functions)
*/

#include <stdio.h>

int main()
{
    FILE *file;
    int age;
    int salary;

    // Open file in binary write mode
    file = fopen("data.dat", "wb");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Get user input
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter salary: ");
    scanf("%d", &salary);

    // Write data to file using putw
    putw(age, file);
    putw(salary, file);
    fclose(file);

    // Open file in binary read mode
    file = fopen("data.dat", "rb");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Read and display data from file using getw
    printf("\nReading from file:\n");
    age = getw(file);
    salary = getw(file);

    printf("Age: %d\n", age);
    printf("Salary: %d\n", salary);

    fclose(file);

    return 0;
}
