// Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

/*
Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1

*/
#include <stdio.h>

void print_indices_sumto_target(int *arr, int count, int target)
{
    int found = 0;
    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                found = 1;
                printf("\n%d %d\n", i, j);
                break;
            }
        }
        if (found == 1)
        {
            break;
        }
    }
    if (found == 0)
    {
        printf("\n-1 -1\n");
    }
}

int main()
{
    int nums1[] = {2,7,11,15}, target = 9;
    print_indices_sumto_target(nums1,4,target);
    int nums2[] = {3,2,4}; target = 6;
    print_indices_sumto_target(nums2,3,target);
    int nums3[] = {3,3}; target = 6;
    print_indices_sumto_target(nums3,2,target);

    return 0;
}