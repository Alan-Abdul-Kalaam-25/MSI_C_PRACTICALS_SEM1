/*
WAP in C to show the use of calloc () and realloc () functions.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int initialSize = 5;
    int newSize = 10;

    // Allocate memory for an array of integers using calloc
    arr = (int *)calloc(initialSize, sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize the array elements
    for (int i = 0; i < initialSize; i++)
    {
        arr[i] = i + 1; // Fill with values 1 to 5
    }

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < initialSize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Resize the array using realloc
    arr = (int *)realloc(arr, newSize * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Initialize the new elements
    for (int i = initialSize; i < newSize; i++)
    {
        arr[i] = i + 1; // Fill new elements with values 6 to 10
    }

    // Print the resized array
    printf("Resized array: ");
    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
