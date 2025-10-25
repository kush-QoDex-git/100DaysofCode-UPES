// Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/
#include <stdio.h>
void rmElem(int *arr, int *count, int index)
{
    for (int i = index; i < *count - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    --(*count);
}
void CpyArr(int *to_arr, int *from_arr, int count)
{
    for (int i = 0; i < count; i++)
    {
        to_arr[i] = from_arr[i];
    }
}
int kth_Smallest_elem(int *arr, int count, int k)
{
    int cpycount = count;
    int cpyarr[cpycount];
    CpyArr(cpyarr, arr, cpycount);

    int smallest;
    int smallest_i;

    for (int w = 0; w < k; w++)
    {
        smallest = cpyarr[0];
        for (int i = 1; i < cpycount; i++)
        {
            if (cpyarr[i] == smallest)
            {
                rmElem(cpyarr, &cpycount, i);
            }
            else if (cpyarr[i] < smallest)
            {
                smallest = cpyarr[i];
                smallest_i = i;
            }
        }
        if (w == k - 1)
        {
            break;
        }

        rmElem(cpyarr, &cpycount, smallest_i);
    }
    return smallest;
}

int main()
{
    int k;
    int arr1[] = {10, 5, 4, 3,3,3, 48, 6, 2, 33, 53, 10};
    k = 4;
    printf("%d\n", kth_Smallest_elem(arr1, sizeof(arr1) / sizeof(arr1[0]), k));
    int arr2[] = {7, 10, 4, 3, 20, 15};
    k = 3;
    printf("%d\n", kth_Smallest_elem(arr2, sizeof(arr2) / sizeof(arr2[0]), k));

    return 0;
}