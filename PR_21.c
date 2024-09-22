/*
WAP to find the largest element in an array using dynamic memory allocationj (malloc(), free()) functions.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr;
    int largest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("The largest element is: %d\n", largest);

    free(arr);

    return 0;
}