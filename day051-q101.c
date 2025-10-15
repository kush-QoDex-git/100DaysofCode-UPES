// Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/
#include <stdio.h>

void print_index_of_target(int *nums, int n, int target)
{
    int arr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            arr[count] = i;
            count++;
        }
    }
    if (count == 0)
    {
        printf("-1, -1");
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            printf(" %d", arr[i]);
            if (i == count - 1)
            {
                continue;
            }
            printf(",");
        }
    }
}
int main()
{
    int arr[10] = {12, 13, 4, 4, 56, 7, 8, -4, 0, 23};
    int tar = 0;
    print_index_of_target(arr, 10, 4);
}