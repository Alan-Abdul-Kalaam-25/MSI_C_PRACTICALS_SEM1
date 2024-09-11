/*
WAP to determine if a no. is prime or not.
*/

#include <stdio.h>

int main()
{
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 2)
    {
        isPrime = 0;
    }

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}