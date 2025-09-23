// Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

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

void left_shift_array(int *arr, int *len, int index)
{
    for (int i = index; i < *len - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[*len - 1] = (int)NULL;
    --(*len);
}
int main()
{
    int len, pos;
    printf("Enter the length of the array: ");
    scanf("%d", &len);
    int arr1[len];

    fill_array(arr1, len);
    printf("\nEnter the index whose value you want to remove: ");
    scanf("%d", &pos);
    left_shift_array(arr1, &len, pos);
    print_arr(arr1, len);
    return 0;
}