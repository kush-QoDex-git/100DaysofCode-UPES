// Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

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

int diagonal_elements_sum(int dimen, int *matrix)
{
    int sum = 0;
    for (int i = 0; i < dimen; i++)
    {
        sum += *(matrix + ((dimen * i) + i));
    }
    return sum;
}

int main()
{
    int dim;
    printf("Enter number of rows for the square matrix: ");
    scanf("%d", &dim);
    int mat[dim][dim];
    fill_matrix(dim, dim, mat);
    printf("\n%d\n", diagonal_elements_sum(dim, &mat[0][0]));
    return 0;
}