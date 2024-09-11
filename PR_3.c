/*
WAP to find the largest of 3 nos. by using conditional operator.
*/

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    int biggest;

    printf("NUM1: ");
    scanf("%d", &num1);

    printf("NUM2: ");
    scanf("%d", &num2);

    printf("NUM3: ");
    scanf("%d", &num3);

    biggest = (num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3));

    printf("The largest of the following nos. %d %d %d = %d", num1, num2, num3, biggest);

    return 0;
}