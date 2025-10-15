// Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/
#include <stdio.h>
int majority_elem(int *arr, int n)
{
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        t = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                t++;
            }
        }
        if (t > (n / 2))
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int arr[8]={2,2,1,1,1,2,2,3};
    printf("%d",majority_elem(arr,8));
    return 0;
}