// Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
#include <stdio.h>

void print_max_subarr_elem(int *arr, int count, int k)
{
    int max_s_elem;
    for (int i = 0; i <= count - k; i++)
    {
        max_s_elem = arr[i];
        for (int j = 0; j < k; j++)
        {
            if (arr[i + j] > max_s_elem)
            {
                max_s_elem = arr[i + j];
            }
        }
        printf("%d ", max_s_elem);
    }
}

int main()
{

    int k;
    int arr1[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    k = 3;
    print_max_subarr_elem(arr1,9,k);
    printf("\n");
    int arr2[] = {5, 1, 3, 4, 2};
    k = 1;
    print_max_subarr_elem(arr2,5,k);
    return 0;
}