// Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/

#include <stdio.h>
void even_odd_in_array(int *arr, int size, int *e, int *o)
{
    *e = 0;
    *o = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            ++(*e);
        }
        else
        {
            ++(*o);
        }
    }
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

    // int size = sizeof(a) / sizeof(a[0]);
    int noe = 0, noo = 0;
    even_odd_in_array(a, n, &noe, &noo);
    printf("Number of Even numbers : %d\n", noe);
    printf("Number of Odd numbers  : %d\n", noo);

    return 0;
}