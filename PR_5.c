/*
WAP to find the armstrong nos. between 1 to 500.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    printf("Armstrong numbers between 1 and 500:\n");

    for (int num = 1; num <= 500; num++)
    {
        int originalNum = num;
        int sum = 0;
        int digits = 0;

        while (originalNum != 0)
        {
            digits++;
            originalNum /= 10;
        }

        originalNum = num;

        while (originalNum != 0)
        {
            int remainder = originalNum % 10;
            sum += pow(remainder, digits);
            originalNum /= 10;
        }

        if (sum == num)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}