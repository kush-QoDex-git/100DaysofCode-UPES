// Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

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
void sum_each_rows(int *matrix, int rows, int cols, int *arr)
{

    int sum;
    for (int i = 0; i < rows; i++)
    {
        sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += *(matrix);
            matrix++;
        }
        arr[i] = sum;
    }
}
void print_arr(int *arr, int size)
{
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int rows, cols;
    printf("Enter number of rows and columns for the matrix: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    fill_matrix(rows, cols, matrix);
    int row_sum_arr[rows];
    sum_each_rows(&matrix[0][0], rows, cols, row_sum_arr);
    print_arr(row_sum_arr, rows);

    return 0;
}