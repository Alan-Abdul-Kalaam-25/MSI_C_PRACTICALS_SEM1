/*
WAP to find the sum of the series, "X-X^3/3!+X^5/5!-X^7/7!-X^9/9!...n".
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    int n;
    double sum = 0.0;

    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        double factorial = 1.0;
        for (int j = 1; j <= (2 * i + 1); j++)
        {
            factorial *= j;
        }

        double term = (pow(-1, i) * pow(x, 2 * i + 1)) / factorial;
        sum += term;
    }

    printf("The sum of the series is: %.10f\n", sum);

    return 0;
}