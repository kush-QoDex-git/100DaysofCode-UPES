// Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

void rotate_array_by_k(int *arr, int size, int k)
{
    int temp;
    int arr_k[k];
    for (int i = 0; i < size; i++)
    {
        if (i < k)
        {
            arr_k[i] = arr[size - k + i];
        }
        else
        {
            arr[i] = arr[i - k];
        }
    }
    for (int i = 0; i < k; i++)
    {
        arr[i] = arr_k[i];
    }
}
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
int main()
{
    int size, k;
    printf("Enter a size for the array: ");
    scanf("%d", &size);
    int arr[size];
    fill_array(arr, size);
    printf("\nEnter the position by which you want to rotate the array: ");
    scanf("%d", &k);
    rotate_array_by_k(arr, size, k);
    print_arr(arr, size);
    return 0;
}