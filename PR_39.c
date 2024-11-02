/*
Write a program in C to merge two files and write it in a new file.
*/

#include <stdio.h>

int main()
{
    FILE *file1, *file2, *outputFile;
    char ch;

    // Open the first input file in read mode
    file1 = fopen("employee.txt", "r");
    if (file1 == NULL)
    {
        printf("Error opening file1.txt!\n");
        return 1;
    }

    // Open the second input file in read mode
    file2 = fopen("data.txt", "r");
    if (file2 == NULL)
    {
        printf("Error opening file2.txt!\n");
        fclose(file1);
        return 1;
    }

    // Open the output file in write mode
    outputFile = fopen("merged.txt", "w");
    if (outputFile == NULL)
    {
        printf("Error creating merged.txt!\n");
        fclose(file1);
        fclose(file2);
        return 1;
    }

    // Read from the first file and write to the output file
    while ((ch = fgetc(file1)) != EOF)
    {
        fputc(ch, outputFile);
    }

    // Read from the second file and write to the output file
    while ((ch = fgetc(file2)) != EOF)
    {
        fputc(ch, outputFile);
    }

    // Close all files
    fclose(file1);
    fclose(file2);
    fclose(outputFile);

    printf("Files merged successfully into merged.txt\n");

    return 0;
}
