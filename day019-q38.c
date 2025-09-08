// Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
int main()
{
    int n, digit, sum = 0;
    scanf("%d", &n);
    int d = 10;
    while (n / (d / 10) > 0)
    {
        digit = n % d / (d / 10);
        sum += digit;
        d *= 10;
    }
    printf("%d", sum);
}