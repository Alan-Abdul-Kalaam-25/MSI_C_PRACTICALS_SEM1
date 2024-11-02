/*
Write a program in C to count a number of words and characters in a file.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *file;
    char ch;
    int word_count = 0;
    int char_count = 0;
    int in_word = 0;

    // Open file in read mode
    file = fopen("./data.txt", "r");
    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Read character by character
    while ((ch = fgetc(file)) != EOF)
    {
        char_count++; // Count every character

        // Check for word boundaries
        if (isspace(ch))
        {
            if (in_word)
            {
                word_count++; // End of a word
                in_word = 0;  // We are not in a word anymore
            }
        }
        else
        {
            in_word = 1; // We are in a word
        }
    }

    // If the last character was part of a word, count that word
    if (in_word)
    {
        word_count++;
    }

    fclose(file);

    // Display the counts
    printf("Number of characters: %d\n", char_count);
    printf("Number of words: %d\n", word_count);

    return 0;
}
