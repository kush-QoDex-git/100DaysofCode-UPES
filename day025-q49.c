// Q49: Write a program to print the following pattern:
// 5
// 45
// 345
// 2345
// 12345

/*
Sample Test Cases:
Input 1:

Output 1:
5
45
345
2345
12345

*/
#include <stdio.h>

int main(){
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j > -1; j--)
        {
            printf("%d",(n-j));
        }
        printf("\n");
        
    }
    return 0;
}