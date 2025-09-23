// Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
void right_shift_array(int *arr, int *len, int index)
{
    for (int i = *len; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = 0;
    ++(*len);
}
void insert_in_sorted_array(int *arr, int *len, int elem)
{
    for (int i = 0; i < *len - 1; i++)
    {
        if (elem < arr[0])
        {

            right_shift_array(arr, len, (0));
            arr[0] = elem;
            break;
        }
        else if (elem > arr[*len - 1])
        {
            arr[*len] = elem;
            ++(*len);
        }
        else if ((arr[i] < elem) && (arr[i + 1] > elem))
        {
            right_shift_array(arr, len, (i + 1));
            arr[i + 1] = elem;
            break;
        }
        else if ((arr[i] ==  elem) && (arr[i + 1] > elem))
        {
            right_shift_array(arr, len, (i + 1));
            arr[i + 1] = elem;
            break;
        }
        else
        {
        }
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
    int len, i_elem;
    printf("Enter the length of sorted array: ");
    scanf("%d", &len);
    int arr1[len + 1];
    printf("\n\tEnter the elements in ascending order.\n");
    fill_array(arr1, len);
    printf("Enter the number you wanna insert in the array: ");
    scanf("%d", &i_elem);
    insert_in_sorted_array(arr1, &len, i_elem);
    print_arr(arr1, len);

    return 0;
}