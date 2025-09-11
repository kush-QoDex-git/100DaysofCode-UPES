// Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int facto(int n)
{
    if ((n == 0) || (n == 1))
    {
        return 1;
    }
    return (n * facto(n - 1));
}
int strong_num(int num)
{
    int sum=0, digit, d = 10;
    while (num / (d / 10) > 0)
    {
        digit = (num % d) / (d / 10);
        sum += facto(digit);
        d *= 10;
    }
    if (sum == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    if (strong_num(n))
    {
        printf("\tStrong number.");
    }
    else
    {
        printf("\tNOT Strong number.");
    }

    return 0;
}