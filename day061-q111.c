// Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/
#include <stdio.h>

void print_first_negative_in_subarr(int *arr, int count, int k)
{
    int f_nega;
    for (int i = 0; i <= count - k; i++)
    {
        f_nega = 0;
        for (int j = 0; j < k; j++)
        {
            if (arr[i + j] < 0)
            {
                f_nega = arr[i + j];
                break;
            }
        }
        printf("%d ", f_nega);
    }
}

int main()
{
    int k;

    int arr1[] = {-8, 2, 3, -6, 10};
    k = 2;
    print_first_negative_in_subarr(arr1, 5, k);
    printf("\n");

    int arr2[] = {12, -1, -7, 8, -15, 30, 16, 28};
    k = 3;
    print_first_negative_in_subarr(arr2, 8, k);
    printf("\n");

    int arr3[] = {12, 1, 3, 5};
    k = 3;
    print_first_negative_in_subarr(arr3, 4, k);
    printf("\n");

    return 0;
}