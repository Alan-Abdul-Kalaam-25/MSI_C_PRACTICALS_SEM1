/*
WAP in C to show the functionality of ftell () and rewind () functions of file handling.
*/

#include <stdio.h>

int main()
{
    FILE *file;
    int numbers[] = {10, 20, 30, 40, 50};
    int num;

    // Open file in binary write mode
    file = fopen("numbers.dat", "wb");
    if (file == NULL)
    {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Write integers to file
    for (int i = 0; i < 5; i++)
    {
        fwrite(&numbers[i], sizeof(int), 1, file);
    }
    fclose(file);

    // Open file in binary read mode
    file = fopen("numbers.dat", "rb");
    if (file == NULL)
    {
        printf("Error opening file for reading!\n");
        return 1;
    }

    // Use ftell to get the current position after writing
    long position = ftell(file);
    printf("Current position after writing: %ld bytes\n", position);

    // Rewind to the beginning of the file
    rewind(file);
    printf("Rewound to the beginning of the file.\n");

    // Read integers from file and display them
    printf("Reading integers from file:\n");
    for (int i = 0; i < 5; i++)
    {
        fread(&num, sizeof(int), 1, file);
        printf("Integer %d: %d\n", i + 1, num);
    }

    fclose(file);

    return 0;
}
