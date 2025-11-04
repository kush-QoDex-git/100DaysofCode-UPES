// Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include <stdio.h>

void print_missing(int *arr, int n)
{
    int found = 0;
    for (int i = 0; i <= n; i++)
    {
        found = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            printf("%d", i);
        }
    }
}

int main()
{
    int nums1[4] = {0, 3, 2, 4};
    print_missing(nums1, 4);
    printf("\n");
    int nums2[3] = {1, 2, 3};
    print_missing(nums2, 3);
    printf("\n");
    int nums3[5] = {0, 4, 3, 1, 5};
    print_missing(nums3, 5);
    printf("\n");

    return 0;
}