// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

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
int main()
{
    int n, r_n;
    scanf("%d", &n);
    int nod = num_of_digit(n), p = (int)(pow(10, (nod - 1)));

    int first = n / p;
    int last = n % 10;
    r_n = n - last;
    r_n = r_n % p;
    r_n += last * p;
    r_n += first;
    printf("%d", r_n);
    return 0;
}