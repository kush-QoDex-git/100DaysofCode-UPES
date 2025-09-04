// Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
#include <math.h>
int reverseInt(int num)
{
    int r_num = 0, d1 = 1, count = 0, digit = 0;
    while (num / d1 > 0)
    {
        count++;
        d1 *= 10;
    }
    d1 = 10;
    int d2 = pow(10, (count - 1));
    while (d2 >= 1)
    {
        digit = ((num % d1) - digit) / (d1 / 10);
        r_num += digit * d2;
        d2 = d2 / 10;
        d1 *= 10;
    }
    return r_num;
}
int main()
{
    int e;
    scanf("%d", &e);
    printf("%d", reverseInt(e));
}