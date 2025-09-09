// Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

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
    unsigned long long bin;
    scanf("%llu", &bin);
    
    unsigned long long count = num_of_digit(bin), d2 = pow(10, count - 1);
    int d1 = 10, digit;
    for (int i = 0; i < count; i++)
    {
        digit = (bin / d2) % 10;
        d2 = d2 / 10;
        if ((digit != 0) && (digit != 1))
        {
            printf("\nIt's not binary.\n");
            break;
        }
        else
        {
            digit = (digit == 1) ? 0 : 1;
            printf("%d", digit);
        }
    }

    return 0;
}