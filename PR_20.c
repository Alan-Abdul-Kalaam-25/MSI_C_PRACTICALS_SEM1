/*
WAP to find the sum and product of 2 matrixes using user-defined functions.
*/

#include <stdio.h>

#define SIZE 3

void inputMatrix(int matrix[SIZE][SIZE], const char *name)
{
    printf("Enter elements of matrix %s:\n", name);
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%s[%d][%d]: ", name, i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[SIZE][SIZE], const char *name)
{
    printf("Matrix %s:\n", name);
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void sumMatrix(int mat1[SIZE][SIZE], int mat2[SIZE][SIZE], int result[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void productMatrix(int mat1[SIZE][SIZE], int mat2[SIZE][SIZE], int result[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < SIZE; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main()
{
    int mat1[SIZE][SIZE], mat2[SIZE][SIZE], sum[SIZE][SIZE], product[SIZE][SIZE];

    inputMatrix(mat1, "A");
    inputMatrix(mat2, "B");

    sumMatrix(mat1, mat2, sum);
    productMatrix(mat1, mat2, product);

    printf("\nSum of matrices A and B:\n");
    displayMatrix(sum, "Sum");

    printf("\nProduct of matrices A and B:\n");
    displayMatrix(product, "Product");

    return 0;
}
