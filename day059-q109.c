// Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>
int max_subarr_sum(int *arr, int count, int k)
{
    int max;
    int i_max = 0;
    for (int i = 0; i <= count - k; i++)
    {
        i_max = 0;
        for (int j = 0; j < k; j++)
        {
            i_max += arr[i + j];
        }
        if (i_max > max || i == 0)
        {
            max = i_max;
        }
    }
    return max;
}

int main()
{
    int k;
    int arr1[] = {100, 200, 300, 400};
    k = 2;
    printf("%d\n", max_subarr_sum(arr1, 4, k));

    int arr2[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    k = 4;
    printf("%d\n", max_subarr_sum(arr2, 9, k));

    int arr3[] = {100, 200, 300, 400};
    k = 1;
    printf("%d\n", max_subarr_sum(arr3, 4, k));

    return 0;
}