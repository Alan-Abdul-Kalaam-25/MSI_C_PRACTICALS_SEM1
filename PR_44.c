/*
WAP to show the use of STRINGIZE (#) AND TOKENPASTING (##)  operator in C. following directives #IF, #ELSE and #ENDIF in C
*/

#include <stdio.h>

// Define macros for demonstration
#define VALUE 10
#define STRINGIZE(x) #x
#define TOKENPASTE(x, y) x##y

// Use a macro to conditionally include code
#define FEATURE_ENABLED 1

int main()
{
    printf("Program to demonstrate STRINGIZE and TOKEN PASTING operators along with conditional compilation.\n");

// Conditional Compilation
#if FEATURE_ENABLED
    printf("Feature is enabled!\n");
#else
    printf("Feature is disabled!\n");
#endif

    // Use STRINGIZE operator
    printf("The value of VALUE is: %s\n", STRINGIZE(VALUE));

    // Use TOKEN PASTING operator
    int ab = 20;
    printf("The value of ab is: %d\n", TOKENPASTE(a, b)); // This will paste 'a' and 'b' to form 'ab'

    return 0;
}
