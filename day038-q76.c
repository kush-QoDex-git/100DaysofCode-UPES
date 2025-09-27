// Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

void fill_matrix(int rows, int cols, int matrix[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter element at[%d,%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

int matrix_is_symmetric(int rows, int mat[rows][rows])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
            }
            if (mat[i][j] != mat[j][i])
            {
                return 0;
            }
            else
            {
            }
        }
    }
    return 1;
}
int main()
{
    int rows, cols;
    printf("Enter number of rows and columns for the matrix: ");
    scanf("%d %d", &rows, &cols);
    int mat1[rows][cols];
    fill_matrix(rows, cols, mat1);
    if (rows != cols)
    {
        printf("\n\t! A non-square matrix can't be symmetric. !\n");
    }
    else
    {
        if (matrix_is_symmetric(rows, mat1))
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    }
    return 0;
}