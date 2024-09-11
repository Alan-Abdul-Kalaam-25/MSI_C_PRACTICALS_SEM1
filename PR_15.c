/*
WAP to find the circumference, diameter and area of a circle using functions.
*/

#include <stdio.h>
#define PI 3.14159

float circum(float);
float area(float);
float diamtr(float);

float circum(float rad)
{
    return (2 * PI * rad);
}

float area(float rad)
{
    return (PI * rad * rad);
}

float diamtr(float rad)
{
    return (rad * 2);
}

int main()
{
    float rad, ar, cr, dr;

    printf("Enter a radius of a circle: ");
    scanf("%f", &rad);

    ar = area(rad);
    cr = circum(rad);
    dr = diamtr(rad);

    printf("Area: %f\n", ar);
    printf("Circumference: %f\n", cr);
    printf("Diameter: %f", dr);

    return 0;
}