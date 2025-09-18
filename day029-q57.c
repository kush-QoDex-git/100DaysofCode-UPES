// Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>

int main(){
    
    int a1[] = {1,2,3,4};
    size_t count = 4;
    int sum=0;
    for (size_t i = 0; i < count; i++)
    {
        sum += a1[i];
    }
    printf("%d",sum);

    return 0;
}