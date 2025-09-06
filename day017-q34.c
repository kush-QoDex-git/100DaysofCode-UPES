// Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
int prime(int n)
{
    for (int i = 2; i <= (n / 2); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a;
    scanf("%d", &a);
    if (prime(a))
    {
        printf("\nPrime");
    }
    else
    {

        printf("\nNot Prime");
    }
    return 0;
}