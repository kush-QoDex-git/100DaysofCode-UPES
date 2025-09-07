// Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int main()
{
    int num1, num2, hcf, s;
    scanf("%d %d", &num1, &num2);
    s = (num1 < num2) ? num1 : num2;
    for (int i = 1; i <= s; i++)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            hcf = i;
        }
        else
        {
            continue;
        }
    }
    printf("%d", hcf);
    return 0;
}