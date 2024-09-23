/*WAP to read and print employee details like Employee ID, EName, Salary using a pointer*/

#include <stdio.h>

struct Employee {
    int id;
    char name[100];
    float salary;
};

void readEmployeeDetails(struct Employee *emp) {
    printf("Enter Employee ID: ");
    scanf("%d", &emp->id);
    printf("Enter Employee Name: ");
    getchar();
    fgets(emp->name, sizeof(emp->name), stdin);
    emp->name[strcspn(emp->name, "\n")] = '\0';
    printf("Enter Employee Salary: ");
    scanf("%f", &emp->salary);
}

void printEmployeeDetails(struct Employee *emp) {
    printf("Employee ID: %d\n", emp->id);
    printf("Employee Name: %s\n", emp->name);
    printf("Employee Salary: %.2f\n", emp->salary);
}

int main() {
    struct Employee emp;
    readEmployeeDetails(&emp);
    printEmployeeDetails(&emp);
    return 0;
}
