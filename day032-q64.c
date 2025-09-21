// Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int most_occuring_smallest_int(int num)
{
    int digit, subd, div = 10, div2, times, ft = 0, rd;
    while (num / (div / 10) > 0)
    {
        digit = (num % div) / (div / 10);
        times = 1;
        div2 = div;
        // printf("\n\tdiv:%d->digit:%d\n", div, digit);
        while (num / (div2) > 0)
        {
            subd = (num % (div2 * 10)) / (div2);
            if (subd == digit)
            {
                times++;
            }
            else
            {
            }
            // printf("div2:%d->subd:%d\n", div2, subd);
            div2 *= 10;
        }
        // printf("\n\tdigit:%d->times:%d\n", digit, times);

        if (times > ft)
        {
            ft = times;
            rd = digit;
        }
        else if (times == ft)
        {
            if (digit < rd)
            {
                rd = digit;
            }
            else
            {
            }
        }
        else
        {
        }
        // printf("\n\trd->%d", rd);

        div *= 10;
    }
    return rd;
};
int main()
{
    int n;scanf("%d",&n);
    printf("%d", most_occuring_smallest_int(n));
    return 0;
}