// Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include <stdio.h>

int main()
{
    int a1[] = {23, 4, 5, 778, 8565,-56, -56, -44, 0, -1, 0, 0, 5};
    int max = a1[0], min = a1[0];
    for (int i = 0; i < 12; i++)
    {
        max = (a1[i] > max) ? a1[i] : max;
        min = (a1[i] < min) ? a1[i] : min;
    }
    printf("Max=%d, Min=%d",max,min);
    return 0;
}