// Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
#include <stdio.h>
void cpy_arr(int *To_arr, int *from_arr, int count)
{
    for (int i = 0; i < count; i++)
    {
        To_arr[i] = from_arr[i];
    }
}
void print_arr(int *arr, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
}
void left_shift_array(int *arr, int *len, int index)
{
    for (int i = index; i < *len - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[*len - 1] = (int)NULL;
    --(*len);
}
void sort_Arr(int *arr, int count)
{
    int cp_len = count;
    int cp_arr[cp_len];
    cpy_arr(cp_arr, arr, count);
    int smallest;
    int smallest_j;
    for (int i = 0; i < count; i++)
    {
        smallest = cp_arr[0];
        smallest_j = 0;
        for (int j = 0; j < cp_len; j++)
        {
            if (cp_arr[j] < smallest)
            {
                smallest = cp_arr[j];
                smallest_j = j;
            }
        }
        arr[i] = smallest;
        left_shift_array(cp_arr, &cp_len, smallest_j);
    }
}

void merge_arrays(int *arr1, int size1, int *arr2, int size2, int *merged_arr)
{
    for (int i = 0; i < size1; i++)
    {
        merged_arr[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        merged_arr[size1 + i] = arr2[i];
    }
}

void run(int *arr1, int size1, int *arr2, int size2, int *merged_arr)
{
    merge_arrays(arr1, size1, arr2, size2, merged_arr);
    sort_Arr(merged_arr, size1 + size2);
    print_arr(merged_arr, size1 + size2);
    printf("\n");
}

int main()
{
    int nums1[4] = {2, 7, 11, 15};
    int nums2[3] = {4, 11, 10};
    int m12[7];
    run(nums1, 4, nums2, 3, m12);

    int nums3[3] = {1, 2, 7};
    int nums4[3] = {9, 10, 17};
    int m34[6];
    run(nums3, 3, nums4, 3, m34);
    return 0;
}