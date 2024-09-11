/*
In a company an employee is paid under:
If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary and DA = 90% of basic salary. If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary.
*/

#include <stdio.h>

int main()
{
    float basic_salary, HRA, DA, gross_salary;

    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basic_salary);

    if (basic_salary < 1500)
    {
        HRA = 0.10 * basic_salary;
        DA = 0.90 * basic_salary;
    }
    else
    {
        HRA = 500;
        DA = 0.98 * basic_salary;
    }

    gross_salary = basic_salary + HRA + DA;

    printf("HRA = Rs. %.2f\n", HRA);
    printf("DA = Rs. %.2f\n", DA);
    printf("Gross Salary = Rs. %.2f\n", gross_salary);

    return 0;
}
