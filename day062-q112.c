// Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/
#include <stdio.h>

int maxSubarrSum(int *arr, int count)
{
    int maxSum = arr[0];
    int iSum = 0;
    for (int i = 0; i < count; i++)
    {
        iSum = 0;
        for (int j = i; j < count; j++)
        {
            iSum += arr[j];
            if (iSum > maxSum)
            {
                maxSum = iSum;
            }
        }
    }
    return maxSum;
}

int main()
{
    
int arr1[] = {2, 3, -8, 7, -1, 2, 3};
printf("%d\n",maxSubarrSum(arr1,7));
int arr2[] = {-2, -4};
printf("%d\n",maxSubarrSum(arr2,2));
int arr3[] = {5, 4, 1, 7, 8};
printf("%d\n",maxSubarrSum(arr3,5));


    return 0;
}