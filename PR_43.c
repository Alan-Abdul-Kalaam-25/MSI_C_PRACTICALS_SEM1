/*
WAP to show the use of following directives #IF, #ELSE and #ENDIF in C.
*/

#include <stdio.h>

// Define a macro to enable or disable a feature
#define FEATURE_ENABLED 1

int main()
{
    printf("Program to demonstrate conditional compilation using #if, #else, and #endif\n");

// Check if FEATURE_ENABLED is defined and its value
#if FEATURE_ENABLED
    printf("Feature is enabled!\n");
#else
    printf("Feature is disabled!\n");
#endif

    printf("End of the program.\n");

    return 0;
}
