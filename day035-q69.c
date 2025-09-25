// Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int second_largest_in_array(int *arr, int size)
{
    if (size < 2)
    {
        printf("\n\t! Array should at least contain 2 elements !\n");
        return 0;
    }
    int lar = arr[0], s_lar,check=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= lar)
        {
            lar = arr[i];
            check++;
        }
        else
        {
            s_lar=arr[i]; // to initialize s_lar with some num that is != lar
        }
    }
    if (check==size)
    {
        printf("\n\t! All element are equal. There can be no second largest !\n");
        return 0;
    }
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > s_lar && arr[i] < lar)
        {
            s_lar = arr[i];
        }
    }

    return s_lar;
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
int main()
{
    int size;
    printf("Enter a size for the array: ");
    scanf("%d", &size);
    int arr[size];
    fill_array(arr, size);
    int sec = second_largest_in_array(arr, size);
    printf("\n%d\n", sec);

    return 0;
}