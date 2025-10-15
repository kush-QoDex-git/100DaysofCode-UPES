/*Q105: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.


Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
3, 4, 4, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
8, -1, 1, 3, -1

Input 3:
arr = [1, 2, 3, 5]
Output 3:
2, 3, 5, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, -1, -1, -1

*/
#include <stdio.h>

void print_next_greater_elem(int *arr, int n)
{
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        found = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            printf("-1");
        }
        if (i != n - 1)
        {
            printf(", ");
        }
    }
}

int main()
{
    int arr1[4] = {1, 3, 2, 4};
    int arr2[5] = {6, 8, 0, 1, 3};
    int arr3[4] = {1, 2, 3, 5};
    int arr4[4] = {5, 4, 3, 1};
    print_next_greater_elem(arr1, 4);
    printf("\n");
    print_next_greater_elem(arr2, 5);
    printf("\n");
    print_next_greater_elem(arr3, 4);
    printf("\n");
    print_next_greater_elem(arr4, 4);
    printf("\n");
    return 0;
}