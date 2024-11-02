/*
WAP in C to show the functionality of fseek function.
*/

#include <stdio.h>

int main()
{
    FILE *file;
    int numbers[] = {10, 20, 30, 40, 50};
    int num, position;

    // Open file in binary write mode
    file = fopen("numbers.dat", "wb");
    if (file == NULL)
    {
        printf("Error opening file!\n");
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
        printf("Error opening file!\n");
        return 1;
    }

    // Move to the third integer (index 2) in the file
    fseek(file, 2 * sizeof(int), SEEK_SET);
    fread(&num, sizeof(int), 1, file);
    printf("Third integer (position 2) in file: %d\n", num);

    // Move to the first integer (index 0) in the file
    fseek(file, 0 * sizeof(int), SEEK_SET);
    fread(&num, sizeof(int), 1, file);
    printf("First integer (position 0) in file: %d\n", num);

    // Move to the last integer (index 4) in the file
    fseek(file, 4 * sizeof(int), SEEK_SET);
    fread(&num, sizeof(int), 1, file);
    printf("Last integer (position 4) in file: %d\n", num);

    fclose(file);

    return 0;
}
