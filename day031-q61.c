// Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>

int element_in_array(int *arr, int size, int elem)
{
    for (int i = 0; i < size; i++)

    {
        if (arr[i] == elem)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    printf("Enter number of Elements you want to add in array: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the element(s)/number(s) with \"ENTER\" separation: \n");
    for (int i = 0; i < n; i++)
    {
        printf("\t");
        scanf("%d", &a[i]);
    }

    int elem;
    printf("Enter the Elements you want to search in the array: ");
    scanf("%d", &elem);
    if (element_in_array(a, n, elem) > -1)
    {
        printf("Found at index: %d", element_in_array(a, n, elem));
    }
    else
    {
        printf("element NOT found");
    }

    return 0;
}
