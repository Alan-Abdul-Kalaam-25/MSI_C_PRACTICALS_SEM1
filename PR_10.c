/*
WAP in to find the sum of the series "1-1/2+1/3+1/4...n"
*/

#include <stdio.h>

int main()
{
    int n;
    double sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= 1.0 / i;
        }
        else
        {
            sum += 1.0 / i;
        }
    }

    printf("The sum of the series is: %.6f\n", sum);

    return 0;
}
