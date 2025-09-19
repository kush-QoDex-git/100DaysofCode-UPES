// Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
void count_pos_neg_zero_in_array(int *arr, int size, int *pos, int *neg, int *zero)
{
    *pos = 0;
    *neg = 0;
    *zero = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            ++(*neg);
        }
        else if (arr[i] == 0)
        {
            ++(*zero);
        }
        else
        {
            ++(*pos);
        }
    }
}
#include <stdio.h>

int main()
{
     int n,pos,neg,zero;
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
    count_pos_neg_zero_in_array(a,n,&pos,&neg,&zero);
    printf("Positives: %d, Negatives: %d, Zeros: %d",pos,neg,zero);

    return 0;
}