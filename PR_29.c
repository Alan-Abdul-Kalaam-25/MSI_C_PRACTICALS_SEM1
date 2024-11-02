/*
Create a structure Distance (int feet and float inch). Take two distances as input from user and add them (inch and feet separately). Display total distance in feets and inches.
*/

#include <stdio.h>

struct Distance
{
    int feet;
    float inches;
};

int main()
{
    struct Distance d1, d2, total;

    // Input first distance
    printf("Enter first distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%f", &d1.inches);

    // Input second distance
    printf("\nEnter second distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%f", &d2.inches);

    // Add feet and inches separately
    total.feet = d1.feet + d2.feet;
    total.inches = d1.inches + d2.inches;

    // Convert inches to feet if inches >= 12
    if (total.inches >= 12.0)
    {
        total.feet += (int)(total.inches / 12);
        total.inches = (int)total.inches % 12 + (total.inches - (int)total.inches);
    }

    // Display result
    printf("\nTotal Distance: %d feet %.2f inches\n", total.feet, total.inches);

    return 0;
}
