// Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>

int main()
{
    int n, d = 10, pro = 1, digit;
    scanf("%d", &n);
    while (n / (d / 10) > 0)
    {
        digit = (n % d) / (d / 10);
        if (digit % 2 != 0)
        {
            pro *= digit;
        }
        else
        {
        }
        d *= 10;
    }
    printf("%d", pro);
    return 0;
}