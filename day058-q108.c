// Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/
#include <stdio.h>

void product_except_me(int *arr, int *pro_arr, int size)
{
    int pro;
    for (size_t i = 0; i < size; i++)
    {
        pro = 1;
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                pro *= arr[j];
            }
        }
        pro_arr[i] = pro;
    }
}
void print_Arr(int *arr, int size)
{
    printf("[ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if (i < size - 1)
        {
            printf(", ");
        }
    }
    printf(" ]");
}

int main()
{
    int arr1[] = {1, 2, 3, 4};
    int pro_arr1[4];
    product_except_me(arr1, pro_arr1, 4);
    print_Arr(pro_arr1,4);
    printf("\n");
    int arr2[] = {-1, 1, 0, -3, 3};
    int pro_arr2[5];
    product_except_me(arr2, pro_arr2, 5);
    print_Arr(pro_arr2,5);

    return 0;
}