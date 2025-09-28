// Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

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

int diagonal_distinct_check(int dimension, int *matrix)
{
    int ch1;
    int ch2;
    for (int i = 0; i < dimension; i++)
    {
        ch1 = *(matrix + ((i * dimension) + i));

        for (int j = i + 1; j < dimension; j++)
        {
            ch2 = *(matrix + ((j * dimension) + j));
            // printf("%d %d\n", ch1, ch2);
            if (ch2 == ch1)
            {
                return 0;
            }
            else
            {
                continue;
            }
        }
    }
    return 1;
}

int main()
{
    int dim;
    printf("Enter number of rows for the square matrix: ");
    scanf("%d", &dim);
    int mat[dim][dim];
    fill_matrix(dim, dim, mat);
    if (diagonal_distinct_check(dim, &mat[0][0]))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}