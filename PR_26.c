/*
WAP to read and print employee details like Employee ID, EName, salary using structures
*/

#include <stdio.h>

struct Employee
{
    int empID;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.empID);

    printf("Enter Employee Name: ");
    scanf("%s", emp.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);

    printf("\nEmployee Details:\n");
    printf("Employee ID: %d\n", emp.empID);
    printf("Employee Name: %s\n", emp.name);
    printf("Employee Salary: %.2f\n", emp.salary);

    return 0;
}
