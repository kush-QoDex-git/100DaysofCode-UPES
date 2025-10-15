// Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/
#include <stdio.h>
int pivot_integer(int n)
{
    int l_sum = 0, r_sum = 0;
    for (int i = 1; i < n; i++)
    {
        l_sum = 0;
        r_sum = 0;
        for (int j = 1; j < i; j++)
        {
            l_sum += j;
        }
        for (int j = i + 1; j <= n; j++)
        {
            r_sum += j;
        }
        if (l_sum == r_sum)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    printf("%d",pivot_integer(8));
    return 0;
}
