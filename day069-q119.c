// Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>
void print_repeated(int *arr, int count)
{
    for (int i = 0; i < count - 1; i++)
    {
        if (arr[i] - arr[i + 1] == 0)
        {
            printf("%d\n", arr[i]);
        }
    }
}

int main(){
    int nums1[] = {1,3,3,4};
    print_repeated(nums1,4);
    int nums2[] = {1,2,2};
    print_repeated(nums2,3);
    int nums3[] = {0,4,1,1,5};
    print_repeated(nums3,5);

    return 0;
}