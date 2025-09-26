// Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

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

void transpose_matrix(int rows, int cols, int matrix[rows][cols], int t_matrix[cols][rows])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            t_matrix[j][i] = matrix[i][j];
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
int main()
{
    int rows, cols;
    printf("Enter number of rows and columns for the matrix: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    int t_matrix[cols][rows];
    fill_matrix(rows, cols, matrix);
    transpose_matrix(rows,cols,matrix,t_matrix);
    print_matrix(cols,rows,t_matrix);
    return 0;
}