// Create a structure student (charname[10],int marks[3],,int total and float percentage). Enter the marks of 5 students in 3 subjects and calculate the percentage. (Hint:Use the concept of array of structure).\

#include <stdio.h>

struct student
{
    char name[10];
    int marks[3];
    int total;
    float percentage;
};

int main()
{
    struct student students[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter marks for 3 subjects:\n");
        for (int j = 0; j < 3; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }

        // Calculate total and percentage
        students[i].total = students[i].marks[0] + students[i].marks[1] + students[i].marks[2];
        students[i].percentage = (float)students[i].total / 3;
    }

    // Print details
    printf("\nStudent Details:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Name: %s\n", students[i].name);
        printf("Marks: %d, %d, %d\n", students[i].marks[0], students[i].marks[1], students[i].marks[2]);
        printf("Total: %d\n", students[i].total);
        printf("Percentage: %.2f\n", students[i].percentage);
        printf("\n");
    }

    return 0;
}
