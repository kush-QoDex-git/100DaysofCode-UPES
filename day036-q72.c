// Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>

int sum_elements_of_matrix(int rows, int cols, int matrix[rows][cols])
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}
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
int main()
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    fill_matrix(rows, cols, matrix);
    printf("%d", sum_elements_of_matrix(rows, cols, matrix));

    return 0;
}