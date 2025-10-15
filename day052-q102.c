// Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

/*
Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/
#include <stdio.h>
int index_of_ceil(int* arr, int size, int x){
    int elem =0,ans=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==x)
        {
            return i;
        }
        
        else if (arr[i]>x && arr[i]<arr[elem])
        {
            ans=1;
            elem=i; 
        }
        
    }
    if (ans==1)
    {
        return elem;
    }
    else{
        return -1;
    }
    
}

int main(){
    int arr[10]={1,2,2,3,4,5,6,6,7,7};
    printf("%d",index_of_ceil(arr,10,8));
    return 0;
}