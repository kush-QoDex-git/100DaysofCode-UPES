// Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

/*
Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3

Input 2:
nums = [1,2,3]
Output 2:
-1

Input 3:
nums = [2,1,-1]
Output 3:
0

*/
#include <stdio.h>

int pivot_index(int *arr, int size)
{
    int l_sum = 0, r_sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            l_sum = 0;
            for (int j = 1; j < size; j++)
            {
                r_sum += arr[j];
            }
            if (r_sum == l_sum)
            {
                return 0;
            }
        }
        else
        {
            l_sum = 0;
            r_sum = 0;
            for (int j = 0; j < i; j++)
            {
                l_sum += arr[j];
            }
            if (i == size - 1)
            {
                r_sum = 0;
            }
            else
            {
                for (int j = i + 1; j < size; j++)
                {
                    r_sum += arr[j];
                }
            }
            if (r_sum == l_sum)
            {
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[6] ={1,2,3};
    printf("%d",pivot_index(arr,6));
    return 0;
}