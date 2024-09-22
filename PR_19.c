/*
WAP to store N elements in an array and print the elements using pointers.
*/

#include <stdio.h>

int main()
{
    int len, num;

    printf("Enter the length of the array: ");
    scanf("%d", &len);

    int arr[len];
    int *arrPtr = arr;

    int i = 0;
    while (i < len)
    {
        printf("NUM%d: ", i + 1);
        scanf("%d", &num);
        arr[i] = num;
        i += 1;
    }

    for (int j = 0; j < len; j++)
    {
        printf("ELE%d: %d\n", j + 1, *arrPtr);
        arrPtr++;
    }

    return 0;
}