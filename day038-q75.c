// Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

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
void print_matrix(int rows, int cols, int matrix[rows][cols])
{
    printf("\n");
    for (int i = 0; i < rows; i++)
    {
        printf("\t");
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void add_matrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int sum_mat[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum_mat[i][j] = (mat1[i][j] + mat2[i][j]);
        }
    }
}

int main()
{
    int rows, cols;
    printf("Enter number of rows and columns for the matrix: ");
    scanf("%d %d", &rows, &cols);
    int mat1[rows][cols];
    printf("\n\tFor First Marix: \n");
    fill_matrix(rows, cols, mat1);
    int mat2[rows][cols];
    printf("\n\tFor Second Marix: \n");
    fill_matrix(rows, cols, mat2);
    int sum_mat[rows][cols];
    add_matrices(rows, cols, mat1, mat2, sum_mat);
    printf("\n");
    print_matrix(rows, cols, sum_mat);

    return 0;
}