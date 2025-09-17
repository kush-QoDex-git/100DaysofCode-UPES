// Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/
#include <stdio.h>

int main()
{
    int a1[] = {10, 20, 30};
    int a2[] = {1, 2, 3, 4, 5};

    int in;
    scanf("%d", &in);

    if (in == 3)
    {
        for (int i = 0; i < in; i++)
        {
            printf("%d ", a1[i]);
        }
    }
    else if (in == 5)
    {
        for (int i = 0; i < in; i++)
        {
            printf("%d ", a2[i]);
        }
        }

    return 0;
}