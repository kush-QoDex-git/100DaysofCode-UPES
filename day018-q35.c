// Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/
#include <stdio.h>
int main()
{
    int n = 12;
    scanf("%d", &n);
    printf("1 x ");
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("%d x ", i);
        }
        else
        {
            continue;
        }
    }
    printf("%d", n);
    return 0;
}