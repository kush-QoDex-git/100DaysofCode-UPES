// Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

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

void reverse_int_array(int *arr, int size)
{
    int temp;
    for (int i = 0; i < (size / 2); i++)
    {
        temp = arr[i];
        arr[i] = arr[size - (i + 1)];
        arr[size - (i + 1)] = temp;
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
    int size;
    printf("Enter size for the array: ");
    scanf("%d",&size);
    int arr[size];
    fill_array(arr, size);
    reverse_int_array(arr, size);
    print_arr(arr,size);

    return 0;
}