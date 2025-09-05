// Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
#include <math.h>
int num_of_digit(int a)
{
    int div = 1, count = 0;
    while ((a / div) > 0)
    {
        count++;
        div *= 10;
    }
    return count;
}
int palindrome(unsigned long long a)
{
    int fdig = 0, bdig = 0, count = num_of_digit(a), fdiv = pow(10, count - 1), bdiv = 10, d = 1, ans = 0;
    for (int i = 0; i < (count / 2); i++)
    {
        fdig = (a / fdiv) % 10;
        bdig = (a % bdiv) / (bdiv / 10);
        ans = (fdig == bdig) ? 1 : 0;
        // printf("%d\t%d\n", fdig, bdig);
        fdiv /= 10;
        bdiv *= 10;
    }
    return ans;
}
int main()
{
    unsigned long long n;
    scanf("%llu", &n);
    if (palindrome(n))
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    // printf("%d",palindrome(12345654321));
}