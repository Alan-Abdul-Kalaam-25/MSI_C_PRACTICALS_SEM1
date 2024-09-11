/*
A five digit no. is taken input form user, write a program to reverse that no. and find sum of its digits too.
*/

#include <stdio.h>

int main()
{
    int num, originalNum, reversedNum = 0, remainder, sum = 0;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    if (num < 10000 || num > 99999)
    {
        printf("Error: The number must be five digits.\n");
        return 1;
    }

    originalNum = num;

    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    num = originalNum;
    while (num != 0)
    {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("Original number: %d\n", originalNum);
    printf("Reversed number: %d\n", reversedNum);
    printf("Sum of digits: %d\n", sum);

    return 0;
}