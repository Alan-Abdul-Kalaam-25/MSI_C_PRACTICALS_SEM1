/*
WAP in C that takes the file name as an input from user, create a file “data” to store integer numbers from 1 to 10. Create two more files “even” and “odd, read the contents of “data” and check whether the number is even and odd and copied the same in to “even” and “odd” file.
*/

#include <stdio.h>

int main()
{
    FILE *dataFile, *evenFile, *oddFile;
    char filename[100];
    int num;

    // Get the filename from the user
    printf("Enter the filename to create (data): ");
    scanf("%s", filename);

    // Create and write numbers from 1 to 10 into the "data" file
    dataFile = fopen(filename, "w");
    if (dataFile == NULL)
    {
        printf("Error creating file %s!\n", filename);
        return 1;
    }

    for (num = 1; num <= 10; num++)
    {
        fprintf(dataFile, "%d\n", num);
    }
    fclose(dataFile);

    // Open the "data" file for reading
    dataFile = fopen(filename, "r");
    if (dataFile == NULL)
    {
        printf("Error opening file %s for reading!\n", filename);
        return 1;
    }

    // Create "even" and "odd" files
    evenFile = fopen("even", "w");
    if (evenFile == NULL)
    {
        printf("Error creating file even!\n");
        fclose(dataFile);
        return 1;
    }

    oddFile = fopen("odd", "w");
    if (oddFile == NULL)
    {
        printf("Error creating file odd!\n");
        fclose(dataFile);
        fclose(evenFile);
        return 1;
    }

    // Read numbers from "data" and write them to "even" or "odd" files
    while (fscanf(dataFile, "%d", &num) != EOF)
    {
        if (num % 2 == 0)
        {
            fprintf(evenFile, "%d\n", num);
        }
        else
        {
            fprintf(oddFile, "%d\n", num);
        }
    }

    // Close all files
    fclose(dataFile);
    fclose(evenFile);
    fclose(oddFile);

    printf("Numbers have been categorized into 'even' and 'odd' files.\n");

    return 0;
}
