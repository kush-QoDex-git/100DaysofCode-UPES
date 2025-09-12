// Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.56

Input 2:
5
Output 2:
Approximate sum: 2.22

*/
#include <stdio.h>

int main()
{
    
    float term,sum = 0;
    int n;
    scanf("%d", &n);

    for (float i = 1; i <= n; i++)
    {
        term = ((2 * i) / (3 + ((i - 1) * 4)));
        sum += term;
    }
    printf("Approximate sum: %f", sum);
    return 0;
}