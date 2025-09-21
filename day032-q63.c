// Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

void fill_array(int *arr, int size)
{
    printf("\tInput elements for the array.\n");
    for (int i = 0; i < size; i++)
    {
        printf("Element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
}
void print_arr(int *arr, int size)
{
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void merge_arrrays(int *arr1, int s1, int *arr2, int s2, int *merged_arr)
{
    for (int i = 0; i < s1; i++)
    {
        merged_arr[i] = arr1[i];
    }
    for (int i = 0; i < s2; i++)
    {
        merged_arr[s1 + i] = arr1[i];
    }
}
int main()
{
    int n1, n2;
    printf("Number of elements for first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    fill_array(arr1, n1);
    printf("\nNumber of elements for second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    fill_array(arr1, n2);
    int arr3[n1 + n2];
    merge_arrrays(arr1, n1, arr2, n2, arr3);
    print_arr(arr3, n1 + n2);

    return 0;
}